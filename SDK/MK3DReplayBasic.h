// Enum MK3DReplayBasic.EPlayerListSortMethod
enum class EPlayerListSortMethod : uint8_t {
	E_ByName = 0,
	E_ByDistance = 1,
	E_ByKillCount = 2,
	E_Last = 3,
	E_MAX = 4,
};

// Class MK3DReplayBasic.MK3DUserInterfaceManager
class AMK3DUserInterfaceManager : public UActor {

public:

	struct TArray<Unknown> WidgetInfoArray; // 0x310 (16)
	struct TMap<Unknown, Unknown> ReplayWidgetMap; // 0x320 (80)

	struct Unknown Get(); // Function MK3DReplayBasic.MK3DUserInterfaceManager.Get(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375950>
};

// Class MK3DReplayBasic.NativePlayerListItem
class UNativePlayerListItem : public UUserWidget {

public:

	struct Unknown Button_PlayerName; // 0x248 (8)
	struct Unknown Text_PlayerName; // 0x250 (8)

	void OnClickPlayerNameButton(); // Function MK3DReplayBasic.NativePlayerListItem.OnClickPlayerNameButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375DF0>
};

// Class MK3DReplayBasic.NativePlayerListWidget
class UNativePlayerListWidget : public UUserWidget {

public:

	struct Unknown SortMethodTextBlock; // 0x248 (8)
	struct Unknown PlayerListPrevButton; // 0x250 (8)
	struct Unknown PlayerListNextButton; // 0x258 (8)
	struct Unknown ScrollBox_PlayerName; // 0x260 (8)

	void ShowPlayerList(); // Function MK3DReplayBasic.NativePlayerListWidget.ShowPlayerList(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377B70>
	void SetPlayerListWidgetButtons(); // Function MK3DReplayBasic.NativePlayerListWidget.SetPlayerListWidgetButtons(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377950>
	void OnClickPlayerListPrevButton(); // Function MK3DReplayBasic.NativePlayerListWidget.OnClickPlayerListPrevButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375DD0>
	void OnClickPlayerListNextButton(); // Function MK3DReplayBasic.NativePlayerListWidget.OnClickPlayerListNextButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375DB0>
	void HidePlayerList(); // Function MK3DReplayBasic.NativePlayerListWidget.HidePlayerList(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375A70>
};

// Class MK3DReplayBasic.NativeReplayEventMarkerBasic
class UNativeReplayEventMarkerBasic : public UUserWidget {

public:

	struct Unknown EventBorder; // 0x248 (8)
	struct Unknown VisualBorder; // 0x250 (8)
	struct Unknown EventInform; // 0x258 (8)

	struct Unknown OnMouseMoveEventBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseMoveEventBorder(Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1376CD0>
	struct Unknown OnMouseLeaveEventBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseLeaveEventBorder(Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1376930>
	struct Unknown OnMouseEnterEventBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseEnterEventBorder(Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1376590>
	struct Unknown OnMouseButtonUpEventBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseButtonUpEventBorder(Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13763C0>
	struct Unknown OnMouseButtonDownEventBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseButtonDownEventBorder(Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13761F0>
	struct Unknown GetBorderSize(); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.GetBorderSize(Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375980>
};

// Class MK3DReplayBasic.NativeReplayKillEventMarker
class UNativeReplayKillEventMarker : public UNativeReplayEventMarkerBasic {

public:

	struct Unknown KillEvent; // 0x270 (48)
	float ClickToJumpDeltaSec; // 0x2A8 (4)

	void SetKillEvent(struct Unknown& InKillEvent); // Function MK3DReplayBasic.NativeReplayKillEventMarker.SetKillEvent(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377890>
	void OnReplayJumpComplete(char bSuccess); // Function MK3DReplayBasic.NativeReplayKillEventMarker.OnReplayJumpComplete(Final|Native|Protected) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377090>
	int32_t GetEventTime(); // Function MK3DReplayBasic.NativeReplayKillEventMarker.GetEventTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13759C0>
};

// Class MK3DReplayBasic.NativeReplayListItem
class UNativeReplayListItem : public UUserWidget {

public:

	struct Unknown ReplayListItemBtn; // 0x248 (8)
	struct Unknown TextName; // 0x250 (8)
	struct Unknown TextLive; // 0x258 (8)
	struct Unknown TextTime; // 0x260 (8)
	struct FMulticastInlineDelegate OnSelectedReplayListItemEvent; // 0x278 (16)

	void SetReplayListItemText(struct FString Name, char IsLive, struct Unknown Time); // Function MK3DReplayBasic.NativeReplayListItem.SetReplayListItemText(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377970>
	void PlayReplay(); // Function MK3DReplayBasic.NativeReplayListItem.PlayReplay(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377670>
	void OnSelectedReplayListItemEvent__DelegateSignature(struct FString ReplayName); // DelegateFunction MK3DReplayBasic.NativeReplayListItem.OnSelectedReplayListItemEvent__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OnClickedReplayListItemBtn(); // Function MK3DReplayBasic.NativeReplayListItem.OnClickedReplayListItemBtn(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375F10>
};

// Class MK3DReplayBasic.NativeReplayListLevel
class ANativeReplayListLevel : public ALevelScriptActor {

public:

	struct Unknown ReplayListWidget; // 0x318 (8)
	struct Unknown* ReplayListWidgetClass; // 0x320 (8)

	void ShowMouseCursor(); // Function MK3DReplayBasic.NativeReplayListLevel.ShowMouseCursor(Final|Native|Protected) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377B50>
	void AddListWidgetToViewPort(); // Function MK3DReplayBasic.NativeReplayListLevel.AddListWidgetToViewPort(Final|Native|Protected) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375500>
};

// Class MK3DReplayBasic.NativeReplayListWidget
class UNativeReplayListWidget : public UUserWidget {

public:

	struct Unknown PageSizeTB; // 0x248 (8)
	struct Unknown CurrentPageTB; // 0x250 (8)
	struct Unknown ScrollBoxReplayList; // 0x258 (8)
	struct Unknown RefreshBtn; // 0x260 (8)
	struct Unknown PrevBtn; // 0x268 (8)
	struct Unknown NextBtn; // 0x270 (8)
	struct Unknown TotalReplaysTB; // 0x278 (8)
	struct Unknown TotalPageText; // 0x280 (8)
	struct Unknown ReplayItemInform; // 0x288 (8)
	struct Unknown ShouldKeepChkBox; // 0x290 (8)
	struct Unknown PlayBtn; // 0x298 (8)
	struct Unknown DeleteBtn; // 0x2A0 (8)
	struct Unknown DeleteOldReplaysBtn; // 0x2A8 (8)
	struct Unknown ReplaysToKeepTB; // 0x2B0 (8)
	int32_t TotalPages; // 0x2B8 (4)
	int32_t CurrentPage; // 0x2BC (4)
	int32_t PageSize; // 0x2C0 (4)
	int32_t TotalReplays; // 0x2C4 (4)
	int32_t ReplaysToKeep; // 0x2C8 (4)

	void UpdateTotalReplaysTB(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateTotalReplaysTB(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377F00>
	void UpdateTotalPage(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateTotalPage(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377EE0>
	char UpdateShouldKeep(struct FString ReplayName, char bShouldKeep); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateShouldKeep(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377D80>
	void UpdateReplaysToKeepTB(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplaysToKeepTB(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377D60>
	void UpdateReplayStatics(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplayStatics(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377D40>
	void UpdateReplayListItems(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplayListItems(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377D20>
	void UpdatePageSizeTB(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdatePageSizeTB(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377D00>
	void UpdateCurrentPageTB(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateCurrentPageTB(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377CC0>
	void ShowReplayItemDetail(struct FString inSelectedReplayName); // Function MK3DReplayBasic.NativeReplayListWidget.ShowReplayItemDetail(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377B90>
	void PlayReplay(struct FString ReplayToPlay, char bShowSimpleConfirmBox); // Function MK3DReplayBasic.NativeReplayListWidget.PlayReplay(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377690>
	void OnTextCommitedReplaysToKeepTB(struct FText& Text, char CommitMethod); // Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedReplaysToKeepTB(Final|Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377450>
	void OnTextCommitedPageSize(struct FText& Text, char CommitMethod); // Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedPageSize(Final|Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377330>
	void OnTextCommitedCurrentPage(struct FText& Text, char CommitMethod); // Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedCurrentPage(Final|Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377210>
	void OnSelectedReplayListItem(struct FString ReplayName); // Function MK3DReplayBasic.NativeReplayListWidget.OnSelectedReplayListItem(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377120>
	void OnKeepAndDeleteOldReplaysComplete(int32_t nRemainedReplays, char bSuccess); // Function MK3DReplayBasic.NativeReplayListWidget.OnKeepAndDeleteOldReplaysComplete(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1376130>
	void OnEnumerateReplayListComplete(int32_t RetPageIndex, int32_t RetPageSize); // Function MK3DReplayBasic.NativeReplayListWidget.OnEnumerateReplayListComplete(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1376070>
	void OnDeleteReplayComplete(struct FString ReplayName, char bSuccess); // Function MK3DReplayBasic.NativeReplayListWidget.OnDeleteReplayComplete(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375F30>
	void OnClickedRefreshBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedRefreshBtn(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375A30>
	void OnClickedPrevBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedPrevBtn(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375A10>
	void OnClickedPlayBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedPlayBtn(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375EF0>
	void OnClickedNextBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedNextBtn(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13759F0>
	void OnClickedDeleteOldReplaysBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedDeleteOldReplaysBtn(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375ED0>
	void OnClickedDeleteBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedDeleteBtn(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375EB0>
	void OnCheckStateChangedSouldKeep(char bIsChecked); // Function MK3DReplayBasic.NativeReplayListWidget.OnCheckStateChangedSouldKeep(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375D00>
	void InitUI(); // Function MK3DReplayBasic.NativeReplayListWidget.InitUI(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375A90>
	void GetReplayList(); // Function MK3DReplayBasic.NativeReplayListWidget.GetReplayList(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375A30>
	void GetPrevReplayList(); // Function MK3DReplayBasic.NativeReplayListWidget.GetPrevReplayList(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375A10>
	void GetNextReplayList(); // Function MK3DReplayBasic.NativeReplayListWidget.GetNextReplayList(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13759F0>
	void DeleteReplay(struct FString ReplayToDelete, char bShowSimpleConfirmBox); // Function MK3DReplayBasic.NativeReplayListWidget.DeleteReplay(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375790>
	void ChangeReplaysToKeep(struct FText& Text); // Function MK3DReplayBasic.NativeReplayListWidget.ChangeReplaysToKeep(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13756C0>
	void ChangePageSize(struct FText& Text); // Function MK3DReplayBasic.NativeReplayListWidget.ChangePageSize(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13755F0>
	void ChangeCurrentPage(struct FText& Text); // Function MK3DReplayBasic.NativeReplayListWidget.ChangeCurrentPage(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375520>
};

// Class MK3DReplayBasic.NativeReplayTimelineBasicWidget
class UNativeReplayTimelineBasicWidget : public UUserWidget {

public:

	struct Unknown ReplayTimelineScrollBox; // 0x248 (8)
	struct Unknown ReplayTimelineSizeBox; // 0x250 (8)
	struct Unknown ReplayTimelineBorder; // 0x258 (8)
	struct Unknown ReplayTimelineSlider; // 0x260 (8)
	struct Unknown ReplayTimeToGoBorder; // 0x268 (8)
	struct Unknown ReplayTimeToGoText; // 0x270 (8)
	struct Unknown ReplayCurrentTimeTextBlock; // 0x278 (8)
	struct Unknown ReplayTotalTimeTextBlock; // 0x280 (8)
	struct Unknown ReplayPauseButton; // 0x288 (8)
	struct Unknown ReplayResumeButton; // 0x290 (8)
	struct Unknown ReplaySpeedUpButton; // 0x298 (8)
	struct Unknown ReplaySpeedDownButton; // 0x2A0 (8)
	struct Unknown ReplaySpeedTextBlock; // 0x2A8 (8)
	struct Unknown ShowKillChkBox; // 0x2B0 (8)
	struct Unknown ShowKnockoutChkBox; // 0x2B8 (8)
	struct Unknown TimelineScaleUpButton; // 0x2C0 (8)
	struct Unknown TimelineScaleDownButton; // 0x2C8 (8)
	struct Unknown TimelineScaleTextBlock; // 0x2D0 (8)
	float TimelineScaleDelta; // 0x2D8 (4)
	float TimelineMaxScale; // 0x2DC (4)
	struct TArray<Unknown> KillEventMarkers; // 0x300 (16)
	struct TArray<Unknown> KnockoutEventMarkers; // 0x310 (16)
	struct TArray<Unknown> MK3DKillEvents; // 0x320 (16)
	struct TArray<Unknown> MK3DKnockoutEvents; // 0x330 (16)

	void UpdateTimelineScale(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.UpdateTimelineScale(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377EC0>
	void UpdateNativeReplaySpeedTextBlock(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.UpdateNativeReplaySpeedTextBlock(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377CE0>
	void Timer_EnumerateMK3DKnockoutEvents(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.Timer_EnumerateMK3DKnockoutEvents(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377CA0>
	void Timer_EnumerateMK3DKillEvents(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.Timer_EnumerateMK3DKillEvents(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377C80>
	void SetTimelineScale(float InScale); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.SetTimelineScale(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377AD0>
	void RemoveAllKnockoutEventMarkers(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.RemoveAllKnockoutEventMarkers(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377870>
	void RemoveAllKillEventMarkers(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.RemoveAllKillEventMarkers(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377850>
	void RefreshKillEventMarkers(enum class Unknow killType); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.RefreshKillEventMarkers(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13777D0>
	void OnValueChangedTimeSlider(float InValue); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnValueChangedTimeSlider(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13775F0>
	void OnTimelineScrollBoxUserScrolled(float fCurrentOffset); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnTimelineScrollBoxUserScrolled(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377570>
	void OnRefreshMarkersIfWidgetReady(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnRefreshMarkersIfWidgetReady(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1377070>
	struct Unknown OnMouseMoveTimelineBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnMouseMoveTimelineBorder(Final|Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1376EA0>
	struct Unknown OnMouseLeaveTimelineBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnMouseLeaveTimelineBorder(Final|Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1376B00>
	struct Unknown OnMouseEnterTimelineBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnMouseEnterTimelineBorder(Final|Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1376760>
	void OnClickTimelineScaleUpButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickTimelineScaleUpButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375E90>
	void OnClickTimelineScaleDownButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickTimelineScaleDownButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375E70>
	void OnClickSpeedUpButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickSpeedUpButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375E50>
	void OnClickSpeedDownButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickSpeedDownButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375E30>
	void OnClickResumeButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickResumeButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375E10>
	void OnClickPauseButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickPauseButton(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375D90>
	void OnCheckStateChangedShowKnockout(char bIsChecked); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnCheckStateChangedShowKnockout(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375C70>
	void OnCheckStateChangedShowKill(char bIsChecked); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnCheckStateChangedShowKill(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375BE0>
	void OnChangeCameraType(enum class Unknow CameraType, struct FString TargetPlayerName); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnChangeCameraType(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375AB0>
	float GetTimelineScale(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.GetTimelineScale(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1375A50>
	void EnumerateMK3DKillEvents(enum class Unknow killType); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.EnumerateMK3DKillEvents(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x13758D0>
	struct Unknown CreateEventMarker(enum class Unknow killType); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.CreateEventMarker(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BPUpdateTimelineScale(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.BPUpdateTimelineScale(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BPUpdateKillEventMarkersPos(enum class Unknow killType, float TotalTime); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.BPUpdateKillEventMarkersPos(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Class MK3DReplayBasic.ReplayEventBorder
class UReplayEventBorder : public UBorder {

public:

	struct FDelegate OnMouseEnterEvent; // 0x270 (16)
};

// Class MK3DReplayBasic.TimelineBorder
class UTimelineBorder : public UBorder {

public:

	struct FDelegate OnMouseEnterEvent; // 0x270 (16)
	struct FDelegate OnMouseLeaveEvent; // 0x280 (16)
};

// ScriptStruct MK3DReplayBasic.UserWidgetInfoForReplay_T
struct FUserWidgetInfoForReplay_T {
	struct FString KeyName; // 0x0 (16)
	struct FString FilePath; // 0x10 (16)
};

// Function MK3DReplayBasic.MK3DUserInterfaceManager.Get
inline struct Unknown AMK3DUserInterfaceManager::Get() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.MK3DUserInterfaceManager.Get");

	struct Get_Params {
		
		struct Unknown ReturnValue;

	}; Get_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativePlayerListItem.OnClickPlayerNameButton
inline void UNativePlayerListItem::OnClickPlayerNameButton() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativePlayerListItem.OnClickPlayerNameButton");

	struct OnClickPlayerNameButton_Params {
		
	}; OnClickPlayerNameButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativePlayerListWidget.ShowPlayerList
inline void UNativePlayerListWidget::ShowPlayerList() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativePlayerListWidget.ShowPlayerList");

	struct ShowPlayerList_Params {
		
	}; ShowPlayerList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativePlayerListWidget.SetPlayerListWidgetButtons
inline void UNativePlayerListWidget::SetPlayerListWidgetButtons() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativePlayerListWidget.SetPlayerListWidgetButtons");

	struct SetPlayerListWidgetButtons_Params {
		
	}; SetPlayerListWidgetButtons_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativePlayerListWidget.OnClickPlayerListPrevButton
inline void UNativePlayerListWidget::OnClickPlayerListPrevButton() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativePlayerListWidget.OnClickPlayerListPrevButton");

	struct OnClickPlayerListPrevButton_Params {
		
	}; OnClickPlayerListPrevButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativePlayerListWidget.OnClickPlayerListNextButton
inline void UNativePlayerListWidget::OnClickPlayerListNextButton() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativePlayerListWidget.OnClickPlayerListNextButton");

	struct OnClickPlayerListNextButton_Params {
		
	}; OnClickPlayerListNextButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativePlayerListWidget.HidePlayerList
inline void UNativePlayerListWidget::HidePlayerList() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativePlayerListWidget.HidePlayerList");

	struct HidePlayerList_Params {
		
	}; HidePlayerList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseMoveEventBorder
inline struct Unknown UNativeReplayEventMarkerBasic::OnMouseMoveEventBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseMoveEventBorder");

	struct OnMouseMoveEventBorder_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseMoveEventBorder_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseLeaveEventBorder
inline struct Unknown UNativeReplayEventMarkerBasic::OnMouseLeaveEventBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseLeaveEventBorder");

	struct OnMouseLeaveEventBorder_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseLeaveEventBorder_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseEnterEventBorder
inline struct Unknown UNativeReplayEventMarkerBasic::OnMouseEnterEventBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseEnterEventBorder");

	struct OnMouseEnterEventBorder_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseEnterEventBorder_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseButtonUpEventBorder
inline struct Unknown UNativeReplayEventMarkerBasic::OnMouseButtonUpEventBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseButtonUpEventBorder");

	struct OnMouseButtonUpEventBorder_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseButtonUpEventBorder_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseButtonDownEventBorder
inline struct Unknown UNativeReplayEventMarkerBasic::OnMouseButtonDownEventBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseButtonDownEventBorder");

	struct OnMouseButtonDownEventBorder_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseButtonDownEventBorder_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayEventMarkerBasic.GetBorderSize
inline struct Unknown UNativeReplayEventMarkerBasic::GetBorderSize() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayEventMarkerBasic.GetBorderSize");

	struct GetBorderSize_Params {
		
		struct Unknown ReturnValue;

	}; GetBorderSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayKillEventMarker.SetKillEvent
inline void UNativeReplayKillEventMarker::SetKillEvent(struct Unknown& InKillEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayKillEventMarker.SetKillEvent");

	struct SetKillEvent_Params {
		struct Unknown& InKillEvent;
	}; SetKillEvent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InKillEvent = Params.InKillEvent;

}

// Function MK3DReplayBasic.NativeReplayKillEventMarker.OnReplayJumpComplete
inline void UNativeReplayKillEventMarker::OnReplayJumpComplete(char bSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayKillEventMarker.OnReplayJumpComplete");

	struct OnReplayJumpComplete_Params {
		char bSuccess;
	}; OnReplayJumpComplete_Params Params;

	Params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayKillEventMarker.GetEventTime
inline int32_t UNativeReplayKillEventMarker::GetEventTime() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayKillEventMarker.GetEventTime");

	struct GetEventTime_Params {
		
		int32_t ReturnValue;

	}; GetEventTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayListItem.SetReplayListItemText
inline void UNativeReplayListItem::SetReplayListItemText(struct FString Name, char IsLive, struct Unknown Time) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListItem.SetReplayListItemText");

	struct SetReplayListItemText_Params {
		struct FString Name;
		char IsLive;
		struct Unknown Time;
	}; SetReplayListItemText_Params Params;

	Params.Name = Name;
	Params.IsLive = IsLive;
	Params.Time = Time;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListItem.PlayReplay
inline void UNativeReplayListItem::PlayReplay() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListItem.PlayReplay");

	struct PlayReplay_Params {
		
	}; PlayReplay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction MK3DReplayBasic.NativeReplayListItem.OnSelectedReplayListItemEvent__DelegateSignature
inline void UNativeReplayListItem::OnSelectedReplayListItemEvent__DelegateSignature(struct FString ReplayName) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MK3DReplayBasic.NativeReplayListItem.OnSelectedReplayListItemEvent__DelegateSignature");

	struct OnSelectedReplayListItemEvent__DelegateSignature_Params {
		struct FString ReplayName;
	}; OnSelectedReplayListItemEvent__DelegateSignature_Params Params;

	Params.ReplayName = ReplayName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListItem.OnClickedReplayListItemBtn
inline void UNativeReplayListItem::OnClickedReplayListItemBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListItem.OnClickedReplayListItemBtn");

	struct OnClickedReplayListItemBtn_Params {
		
	}; OnClickedReplayListItemBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListLevel.ShowMouseCursor
inline void ANativeReplayListLevel::ShowMouseCursor() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListLevel.ShowMouseCursor");

	struct ShowMouseCursor_Params {
		
	}; ShowMouseCursor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListLevel.AddListWidgetToViewPort
inline void ANativeReplayListLevel::AddListWidgetToViewPort() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListLevel.AddListWidgetToViewPort");

	struct AddListWidgetToViewPort_Params {
		
	}; AddListWidgetToViewPort_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.UpdateTotalReplaysTB
inline void UNativeReplayListWidget::UpdateTotalReplaysTB() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.UpdateTotalReplaysTB");

	struct UpdateTotalReplaysTB_Params {
		
	}; UpdateTotalReplaysTB_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.UpdateTotalPage
inline void UNativeReplayListWidget::UpdateTotalPage() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.UpdateTotalPage");

	struct UpdateTotalPage_Params {
		
	}; UpdateTotalPage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.UpdateShouldKeep
inline char UNativeReplayListWidget::UpdateShouldKeep(struct FString ReplayName, char bShouldKeep) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.UpdateShouldKeep");

	struct UpdateShouldKeep_Params {
		struct FString ReplayName;
		char bShouldKeep;
		char ReturnValue;

	}; UpdateShouldKeep_Params Params;

	Params.ReplayName = ReplayName;
	Params.bShouldKeep = bShouldKeep;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplaysToKeepTB
inline void UNativeReplayListWidget::UpdateReplaysToKeepTB() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplaysToKeepTB");

	struct UpdateReplaysToKeepTB_Params {
		
	}; UpdateReplaysToKeepTB_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplayStatics
inline void UNativeReplayListWidget::UpdateReplayStatics() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplayStatics");

	struct UpdateReplayStatics_Params {
		
	}; UpdateReplayStatics_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplayListItems
inline void UNativeReplayListWidget::UpdateReplayListItems() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplayListItems");

	struct UpdateReplayListItems_Params {
		
	}; UpdateReplayListItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.UpdatePageSizeTB
inline void UNativeReplayListWidget::UpdatePageSizeTB() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.UpdatePageSizeTB");

	struct UpdatePageSizeTB_Params {
		
	}; UpdatePageSizeTB_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.UpdateCurrentPageTB
inline void UNativeReplayListWidget::UpdateCurrentPageTB() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.UpdateCurrentPageTB");

	struct UpdateCurrentPageTB_Params {
		
	}; UpdateCurrentPageTB_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.ShowReplayItemDetail
inline void UNativeReplayListWidget::ShowReplayItemDetail(struct FString inSelectedReplayName) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.ShowReplayItemDetail");

	struct ShowReplayItemDetail_Params {
		struct FString inSelectedReplayName;
	}; ShowReplayItemDetail_Params Params;

	Params.inSelectedReplayName = inSelectedReplayName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.PlayReplay
inline void UNativeReplayListWidget::PlayReplay(struct FString ReplayToPlay, char bShowSimpleConfirmBox) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.PlayReplay");

	struct PlayReplay_Params {
		struct FString ReplayToPlay;
		char bShowSimpleConfirmBox;
	}; PlayReplay_Params Params;

	Params.ReplayToPlay = ReplayToPlay;
	Params.bShowSimpleConfirmBox = bShowSimpleConfirmBox;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedReplaysToKeepTB
inline void UNativeReplayListWidget::OnTextCommitedReplaysToKeepTB(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedReplaysToKeepTB");

	struct OnTextCommitedReplaysToKeepTB_Params {
		struct FText& Text;
		char CommitMethod;
	}; OnTextCommitedReplaysToKeepTB_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedPageSize
inline void UNativeReplayListWidget::OnTextCommitedPageSize(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedPageSize");

	struct OnTextCommitedPageSize_Params {
		struct FText& Text;
		char CommitMethod;
	}; OnTextCommitedPageSize_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedCurrentPage
inline void UNativeReplayListWidget::OnTextCommitedCurrentPage(struct FText& Text, char CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedCurrentPage");

	struct OnTextCommitedCurrentPage_Params {
		struct FText& Text;
		char CommitMethod;
	}; OnTextCommitedCurrentPage_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function MK3DReplayBasic.NativeReplayListWidget.OnSelectedReplayListItem
inline void UNativeReplayListWidget::OnSelectedReplayListItem(struct FString ReplayName) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnSelectedReplayListItem");

	struct OnSelectedReplayListItem_Params {
		struct FString ReplayName;
	}; OnSelectedReplayListItem_Params Params;

	Params.ReplayName = ReplayName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnKeepAndDeleteOldReplaysComplete
inline void UNativeReplayListWidget::OnKeepAndDeleteOldReplaysComplete(int32_t nRemainedReplays, char bSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnKeepAndDeleteOldReplaysComplete");

	struct OnKeepAndDeleteOldReplaysComplete_Params {
		int32_t nRemainedReplays;
		char bSuccess;
	}; OnKeepAndDeleteOldReplaysComplete_Params Params;

	Params.nRemainedReplays = nRemainedReplays;
	Params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnEnumerateReplayListComplete
inline void UNativeReplayListWidget::OnEnumerateReplayListComplete(int32_t RetPageIndex, int32_t RetPageSize) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnEnumerateReplayListComplete");

	struct OnEnumerateReplayListComplete_Params {
		int32_t RetPageIndex;
		int32_t RetPageSize;
	}; OnEnumerateReplayListComplete_Params Params;

	Params.RetPageIndex = RetPageIndex;
	Params.RetPageSize = RetPageSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnDeleteReplayComplete
inline void UNativeReplayListWidget::OnDeleteReplayComplete(struct FString ReplayName, char bSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnDeleteReplayComplete");

	struct OnDeleteReplayComplete_Params {
		struct FString ReplayName;
		char bSuccess;
	}; OnDeleteReplayComplete_Params Params;

	Params.ReplayName = ReplayName;
	Params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnClickedRefreshBtn
inline void UNativeReplayListWidget::OnClickedRefreshBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnClickedRefreshBtn");

	struct OnClickedRefreshBtn_Params {
		
	}; OnClickedRefreshBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnClickedPrevBtn
inline void UNativeReplayListWidget::OnClickedPrevBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnClickedPrevBtn");

	struct OnClickedPrevBtn_Params {
		
	}; OnClickedPrevBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnClickedPlayBtn
inline void UNativeReplayListWidget::OnClickedPlayBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnClickedPlayBtn");

	struct OnClickedPlayBtn_Params {
		
	}; OnClickedPlayBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnClickedNextBtn
inline void UNativeReplayListWidget::OnClickedNextBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnClickedNextBtn");

	struct OnClickedNextBtn_Params {
		
	}; OnClickedNextBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnClickedDeleteOldReplaysBtn
inline void UNativeReplayListWidget::OnClickedDeleteOldReplaysBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnClickedDeleteOldReplaysBtn");

	struct OnClickedDeleteOldReplaysBtn_Params {
		
	}; OnClickedDeleteOldReplaysBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnClickedDeleteBtn
inline void UNativeReplayListWidget::OnClickedDeleteBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnClickedDeleteBtn");

	struct OnClickedDeleteBtn_Params {
		
	}; OnClickedDeleteBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.OnCheckStateChangedSouldKeep
inline void UNativeReplayListWidget::OnCheckStateChangedSouldKeep(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.OnCheckStateChangedSouldKeep");

	struct OnCheckStateChangedSouldKeep_Params {
		char bIsChecked;
	}; OnCheckStateChangedSouldKeep_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.InitUI
inline void UNativeReplayListWidget::InitUI() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.InitUI");

	struct InitUI_Params {
		
	}; InitUI_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.GetReplayList
inline void UNativeReplayListWidget::GetReplayList() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.GetReplayList");

	struct GetReplayList_Params {
		
	}; GetReplayList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.GetPrevReplayList
inline void UNativeReplayListWidget::GetPrevReplayList() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.GetPrevReplayList");

	struct GetPrevReplayList_Params {
		
	}; GetPrevReplayList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.GetNextReplayList
inline void UNativeReplayListWidget::GetNextReplayList() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.GetNextReplayList");

	struct GetNextReplayList_Params {
		
	}; GetNextReplayList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.DeleteReplay
inline void UNativeReplayListWidget::DeleteReplay(struct FString ReplayToDelete, char bShowSimpleConfirmBox) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.DeleteReplay");

	struct DeleteReplay_Params {
		struct FString ReplayToDelete;
		char bShowSimpleConfirmBox;
	}; DeleteReplay_Params Params;

	Params.ReplayToDelete = ReplayToDelete;
	Params.bShowSimpleConfirmBox = bShowSimpleConfirmBox;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayListWidget.ChangeReplaysToKeep
inline void UNativeReplayListWidget::ChangeReplaysToKeep(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.ChangeReplaysToKeep");

	struct ChangeReplaysToKeep_Params {
		struct FText& Text;
	}; ChangeReplaysToKeep_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function MK3DReplayBasic.NativeReplayListWidget.ChangePageSize
inline void UNativeReplayListWidget::ChangePageSize(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.ChangePageSize");

	struct ChangePageSize_Params {
		struct FText& Text;
	}; ChangePageSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function MK3DReplayBasic.NativeReplayListWidget.ChangeCurrentPage
inline void UNativeReplayListWidget::ChangeCurrentPage(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayListWidget.ChangeCurrentPage");

	struct ChangeCurrentPage_Params {
		struct FText& Text;
	}; ChangeCurrentPage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.UpdateTimelineScale
inline void UNativeReplayTimelineBasicWidget::UpdateTimelineScale() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.UpdateTimelineScale");

	struct UpdateTimelineScale_Params {
		
	}; UpdateTimelineScale_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.UpdateNativeReplaySpeedTextBlock
inline void UNativeReplayTimelineBasicWidget::UpdateNativeReplaySpeedTextBlock() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.UpdateNativeReplaySpeedTextBlock");

	struct UpdateNativeReplaySpeedTextBlock_Params {
		
	}; UpdateNativeReplaySpeedTextBlock_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.Timer_EnumerateMK3DKnockoutEvents
inline void UNativeReplayTimelineBasicWidget::Timer_EnumerateMK3DKnockoutEvents() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.Timer_EnumerateMK3DKnockoutEvents");

	struct Timer_EnumerateMK3DKnockoutEvents_Params {
		
	}; Timer_EnumerateMK3DKnockoutEvents_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.Timer_EnumerateMK3DKillEvents
inline void UNativeReplayTimelineBasicWidget::Timer_EnumerateMK3DKillEvents() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.Timer_EnumerateMK3DKillEvents");

	struct Timer_EnumerateMK3DKillEvents_Params {
		
	}; Timer_EnumerateMK3DKillEvents_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.SetTimelineScale
inline void UNativeReplayTimelineBasicWidget::SetTimelineScale(float InScale) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.SetTimelineScale");

	struct SetTimelineScale_Params {
		float InScale;
	}; SetTimelineScale_Params Params;

	Params.InScale = InScale;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.RemoveAllKnockoutEventMarkers
inline void UNativeReplayTimelineBasicWidget::RemoveAllKnockoutEventMarkers() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.RemoveAllKnockoutEventMarkers");

	struct RemoveAllKnockoutEventMarkers_Params {
		
	}; RemoveAllKnockoutEventMarkers_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.RemoveAllKillEventMarkers
inline void UNativeReplayTimelineBasicWidget::RemoveAllKillEventMarkers() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.RemoveAllKillEventMarkers");

	struct RemoveAllKillEventMarkers_Params {
		
	}; RemoveAllKillEventMarkers_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.RefreshKillEventMarkers
inline void UNativeReplayTimelineBasicWidget::RefreshKillEventMarkers(enum class Unknow killType) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.RefreshKillEventMarkers");

	struct RefreshKillEventMarkers_Params {
		enum class Unknow killType;
	}; RefreshKillEventMarkers_Params Params;

	Params.killType = killType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnValueChangedTimeSlider
inline void UNativeReplayTimelineBasicWidget::OnValueChangedTimeSlider(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnValueChangedTimeSlider");

	struct OnValueChangedTimeSlider_Params {
		float InValue;
	}; OnValueChangedTimeSlider_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnTimelineScrollBoxUserScrolled
inline void UNativeReplayTimelineBasicWidget::OnTimelineScrollBoxUserScrolled(float fCurrentOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnTimelineScrollBoxUserScrolled");

	struct OnTimelineScrollBoxUserScrolled_Params {
		float fCurrentOffset;
	}; OnTimelineScrollBoxUserScrolled_Params Params;

	Params.fCurrentOffset = fCurrentOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnRefreshMarkersIfWidgetReady
inline void UNativeReplayTimelineBasicWidget::OnRefreshMarkersIfWidgetReady() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnRefreshMarkersIfWidgetReady");

	struct OnRefreshMarkersIfWidgetReady_Params {
		
	}; OnRefreshMarkersIfWidgetReady_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnMouseMoveTimelineBorder
inline struct Unknown UNativeReplayTimelineBasicWidget::OnMouseMoveTimelineBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnMouseMoveTimelineBorder");

	struct OnMouseMoveTimelineBorder_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseMoveTimelineBorder_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnMouseLeaveTimelineBorder
inline struct Unknown UNativeReplayTimelineBasicWidget::OnMouseLeaveTimelineBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnMouseLeaveTimelineBorder");

	struct OnMouseLeaveTimelineBorder_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseLeaveTimelineBorder_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnMouseEnterTimelineBorder
inline struct Unknown UNativeReplayTimelineBasicWidget::OnMouseEnterTimelineBorder(struct Unknown MyGeometry, struct Unknown& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnMouseEnterTimelineBorder");

	struct OnMouseEnterTimelineBorder_Params {
		struct Unknown MyGeometry;
		struct Unknown& MouseEvent;
		struct Unknown ReturnValue;

	}; OnMouseEnterTimelineBorder_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickTimelineScaleUpButton
inline void UNativeReplayTimelineBasicWidget::OnClickTimelineScaleUpButton() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickTimelineScaleUpButton");

	struct OnClickTimelineScaleUpButton_Params {
		
	}; OnClickTimelineScaleUpButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickTimelineScaleDownButton
inline void UNativeReplayTimelineBasicWidget::OnClickTimelineScaleDownButton() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickTimelineScaleDownButton");

	struct OnClickTimelineScaleDownButton_Params {
		
	}; OnClickTimelineScaleDownButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickSpeedUpButton
inline void UNativeReplayTimelineBasicWidget::OnClickSpeedUpButton() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickSpeedUpButton");

	struct OnClickSpeedUpButton_Params {
		
	}; OnClickSpeedUpButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickSpeedDownButton
inline void UNativeReplayTimelineBasicWidget::OnClickSpeedDownButton() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickSpeedDownButton");

	struct OnClickSpeedDownButton_Params {
		
	}; OnClickSpeedDownButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickResumeButton
inline void UNativeReplayTimelineBasicWidget::OnClickResumeButton() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickResumeButton");

	struct OnClickResumeButton_Params {
		
	}; OnClickResumeButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickPauseButton
inline void UNativeReplayTimelineBasicWidget::OnClickPauseButton() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickPauseButton");

	struct OnClickPauseButton_Params {
		
	}; OnClickPauseButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnCheckStateChangedShowKnockout
inline void UNativeReplayTimelineBasicWidget::OnCheckStateChangedShowKnockout(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnCheckStateChangedShowKnockout");

	struct OnCheckStateChangedShowKnockout_Params {
		char bIsChecked;
	}; OnCheckStateChangedShowKnockout_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnCheckStateChangedShowKill
inline void UNativeReplayTimelineBasicWidget::OnCheckStateChangedShowKill(char bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnCheckStateChangedShowKill");

	struct OnCheckStateChangedShowKill_Params {
		char bIsChecked;
	}; OnCheckStateChangedShowKill_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnChangeCameraType
inline void UNativeReplayTimelineBasicWidget::OnChangeCameraType(enum class Unknow CameraType, struct FString TargetPlayerName) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnChangeCameraType");

	struct OnChangeCameraType_Params {
		enum class Unknow CameraType;
		struct FString TargetPlayerName;
	}; OnChangeCameraType_Params Params;

	Params.CameraType = CameraType;
	Params.TargetPlayerName = TargetPlayerName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.GetTimelineScale
inline float UNativeReplayTimelineBasicWidget::GetTimelineScale() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.GetTimelineScale");

	struct GetTimelineScale_Params {
		
		float ReturnValue;

	}; GetTimelineScale_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.EnumerateMK3DKillEvents
inline void UNativeReplayTimelineBasicWidget::EnumerateMK3DKillEvents(enum class Unknow killType) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.EnumerateMK3DKillEvents");

	struct EnumerateMK3DKillEvents_Params {
		enum class Unknow killType;
	}; EnumerateMK3DKillEvents_Params Params;

	Params.killType = killType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.CreateEventMarker
inline struct Unknown UNativeReplayTimelineBasicWidget::CreateEventMarker(enum class Unknow killType) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.CreateEventMarker");

	struct CreateEventMarker_Params {
		enum class Unknow killType;
		struct Unknown ReturnValue;

	}; CreateEventMarker_Params Params;

	Params.killType = killType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.BPUpdateTimelineScale
inline void UNativeReplayTimelineBasicWidget::BPUpdateTimelineScale() {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.BPUpdateTimelineScale");

	struct BPUpdateTimelineScale_Params {
		
	}; BPUpdateTimelineScale_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.BPUpdateKillEventMarkersPos
inline void UNativeReplayTimelineBasicWidget::BPUpdateKillEventMarkersPos(enum class Unknow killType, float TotalTime) {
	static auto fn = UObject::FindObject<UFunction>("Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.BPUpdateKillEventMarkersPos");

	struct BPUpdateKillEventMarkersPos_Params {
		enum class Unknow killType;
		float TotalTime;
	}; BPUpdateKillEventMarkersPos_Params Params;

	Params.killType = killType;
	Params.TotalTime = TotalTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

