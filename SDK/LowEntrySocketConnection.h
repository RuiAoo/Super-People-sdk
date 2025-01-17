// Enum LowEntrySocketConnection.ELowEntryLatentFunctionCallAction
enum class ELowEntryLatentFunctionCallAction : uint8_t {
	Start = 0,
	Cancel = 1,
	ELowEntryLatentFunctionCallAction_MAX = 2,
};

// Class LowEntrySocketConnection.LowEntryRawSocketConnection
class ULowEntryRawSocketConnection : public Object {

public:

	struct Unknown ListenerCode; // 0x38 (8)
	struct FString Host; // 0x40 (16)
	int32_t Port; // 0x50 (4)
	int32_t PortUdp; // 0x54 (4)
	struct TArray<Unknown> SendingBytes; // 0x58 (16)
	struct TArray<Unknown> ReceivedBytes; // 0x68 (16)
	struct TArray<Unknown> ReceivingBuffer; // 0x78 (16)
	char CanCallOnDisconnect : 0; // 0x98 (1)
	struct FDelegate OnConnectEvent; // 0x9C (16)
	struct FDelegate OnDisconnectEvent; // 0xAC (16)
	struct FDelegate OnReceiveMessageEvent; // 0xBC (16)
	struct FDelegate OnReceiveUnreliableMessageEvent; // 0xCC (16)

	void SendUnreliableMessage(struct TArray<Unknown>& Bytes); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.SendUnreliableMessage(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10949E0>
	void SendMessage(struct TArray<Unknown>& Bytes); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.SendMessage(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1094880>
	char IsConnected(); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.IsConnected(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1093380>
	int32_t GetPortUdp(); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetPortUdp(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1093350>
	int32_t GetPort(); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetPort(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1093320>
	int32_t GetLocalPortUdp(); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetLocalPortUdp(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10932F0>
	int32_t GetLocalPort(); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetLocalPort(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10932C0>
	struct FString GetHost(); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetHost(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1093240>
	void Disconnect(); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.Disconnect(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1093200>
	void Connect(struct Unknown WorldContextObject, struct Unknown LatentInfo, char& SUCCESS); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.Connect(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092600>
};

// Class LowEntrySocketConnection.LowEntryRawSocketConnectionListenerCode
class ULowEntryRawSocketConnectionListenerCode : public Object {

public:

	char Stopped : 0; // 0x28 (1)
	char RunExec : 0; // 0x29 (1)
	char ConnectionSuccess : 0; // 0x2A (1)
	char JustConnected : 0; // 0x38 (1)
	float WaitingForConnectionTime; // 0x3C (4)
	struct Unknown SocketConnection; // 0x40 (8)
	int32_t LatentUUID; // 0x48 (4)
};

// Class LowEntrySocketConnection.LowEntrySocketConnection
class ULowEntrySocketConnection : public Object {

public:

	struct Unknown ListenerCode; // 0x38 (8)
	struct FString Host; // 0x40 (16)
	int32_t Port; // 0x50 (4)
	int32_t PortUdp; // 0x54 (4)
	int32_t NextConnectionValidationFunctionCallId; // 0x58 (4)
	int32_t NextFunctionCallId; // 0x5C (4)
	int32_t NextLatentFunctionCallId; // 0xB0 (4)
	struct TArray<Unknown> SendingBytes; // 0x108 (16)
	struct TArray<Unknown> ReceivedBytes; // 0x118 (16)
	struct TArray<Unknown> ReceivingBuffer; // 0x128 (16)
	char ReceivingType; // 0x139 (1)
	int32_t ReceivingFunctionCallId; // 0x13C (4)
	int32_t ReceivingPacketSize; // 0x140 (4)
	struct TArray<Unknown> ReceivingPacket; // 0x148 (16)
	char WaitingForConnectionValidationResponse : 0; // 0x168 (1)
	float ConnectionValidationResponseTime; // 0x16C (4)
	float ConnectionValidationDelayTime; // 0x170 (4)
	float LatentFunctionConnectionValidationDelayTime; // 0x174 (4)
	int32_t ConnectionValidationFunctionCallId; // 0x178 (4)
	char PeriodicConnectionValidationEnabled : 0; // 0x17C (1)
	char CanCallOnDisconnect : 0; // 0x17D (1)
	struct FDelegate OnConnectEvent; // 0x180 (16)
	struct FDelegate OnDisconnectEvent; // 0x190 (16)
	struct FDelegate OnReceiveMessageEvent; // 0x1A0 (16)
	struct FDelegate OnReceiveUnreliableMessageEvent; // 0x1B0 (16)

	void SetPeriodicConnectionValidationEnabled(char Enabled); // Function LowEntrySocketConnection.LowEntrySocketConnection.SetPeriodicConnectionValidationEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1094B40>
	void SendUnreliableMessage(struct TArray<Unknown>& Bytes); // Function LowEntrySocketConnection.LowEntrySocketConnection.SendUnreliableMessage(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1094A90>
	void SendMessage(struct TArray<Unknown>& Bytes); // Function LowEntrySocketConnection.LowEntrySocketConnection.SendMessage(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1094930>
	void SendLatentFunctionCall(struct Unknown WorldContextObject, struct Unknown LatentInfo, enum class Unknow Branch, struct TArray<Unknown>& Bytes, char& Failed, char& Canceled, struct TArray<Unknown>& ResponseBytes, float Timeout); // Function LowEntrySocketConnection.LowEntrySocketConnection.SendLatentFunctionCall(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10945A0>
	void SendFunctionCall(struct Unknown WorldContextObject, struct Unknown LatentInfo, struct TArray<Unknown>& Bytes, char& SUCCESS, struct TArray<Unknown>& ResponseBytes, float Timeout); // Function LowEntrySocketConnection.LowEntrySocketConnection.SendFunctionCall(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1094350>
	void SendConnectionValidation(float Timeout); // Function LowEntrySocketConnection.LowEntrySocketConnection.SendConnectionValidation(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10942D0>
	void IsPeriodicConnectionValidationEnabled(char& Enabled); // Function LowEntrySocketConnection.LowEntrySocketConnection.IsPeriodicConnectionValidationEnabled(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10933E0>
	char IsConnected(); // Function LowEntrySocketConnection.LowEntrySocketConnection.IsConnected(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10933B0>
	int32_t GetPortUdp(); // Function LowEntrySocketConnection.LowEntrySocketConnection.GetPortUdp(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1093350>
	int32_t GetPort(); // Function LowEntrySocketConnection.LowEntrySocketConnection.GetPort(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1093320>
	int32_t GetLocalPortUdp(); // Function LowEntrySocketConnection.LowEntrySocketConnection.GetLocalPortUdp(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10932F0>
	int32_t GetLocalPort(); // Function LowEntrySocketConnection.LowEntrySocketConnection.GetLocalPort(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x10932C0>
	struct FString GetHost(); // Function LowEntrySocketConnection.LowEntrySocketConnection.GetHost(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1093240>
	void Disconnect(); // Function LowEntrySocketConnection.LowEntrySocketConnection.Disconnect(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1093220>
	void Connect(struct Unknown WorldContextObject, struct Unknown LatentInfo, char& SUCCESS); // Function LowEntrySocketConnection.LowEntrySocketConnection.Connect(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1092740>
};

// Class LowEntrySocketConnection.LowEntrySocketConnectionListenerCode
class ULowEntrySocketConnectionListenerCode : public Object {

public:

	char Stopped : 0; // 0x28 (1)
	char RunExec : 0; // 0x29 (1)
	char ConnectionSuccess : 0; // 0x2A (1)
	char JustConnected : 0; // 0x38 (1)
	float WaitingForConnectionTime; // 0x3C (4)
	struct Unknown SocketConnection; // 0x40 (8)
	int32_t LatentUUID; // 0x48 (4)
};

// Function LowEntrySocketConnection.LowEntryRawSocketConnection.SendUnreliableMessage
inline void ULowEntryRawSocketConnection::SendUnreliableMessage(struct TArray<Unknown>& Bytes) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntryRawSocketConnection.SendUnreliableMessage");

	struct SendUnreliableMessage_Params {
		struct TArray<Unknown>& Bytes;
	}; SendUnreliableMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Bytes = Params.Bytes;

}

// Function LowEntrySocketConnection.LowEntryRawSocketConnection.SendMessage
inline void ULowEntryRawSocketConnection::SendMessage(struct TArray<Unknown>& Bytes) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntryRawSocketConnection.SendMessage");

	struct SendMessage_Params {
		struct TArray<Unknown>& Bytes;
	}; SendMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Bytes = Params.Bytes;

}

// Function LowEntrySocketConnection.LowEntryRawSocketConnection.IsConnected
inline char ULowEntryRawSocketConnection::IsConnected() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntryRawSocketConnection.IsConnected");

	struct IsConnected_Params {
		
		char ReturnValue;

	}; IsConnected_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetPortUdp
inline int32_t ULowEntryRawSocketConnection::GetPortUdp() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetPortUdp");

	struct GetPortUdp_Params {
		
		int32_t ReturnValue;

	}; GetPortUdp_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetPort
inline int32_t ULowEntryRawSocketConnection::GetPort() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetPort");

	struct GetPort_Params {
		
		int32_t ReturnValue;

	}; GetPort_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetLocalPortUdp
inline int32_t ULowEntryRawSocketConnection::GetLocalPortUdp() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetLocalPortUdp");

	struct GetLocalPortUdp_Params {
		
		int32_t ReturnValue;

	}; GetLocalPortUdp_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetLocalPort
inline int32_t ULowEntryRawSocketConnection::GetLocalPort() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetLocalPort");

	struct GetLocalPort_Params {
		
		int32_t ReturnValue;

	}; GetLocalPort_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetHost
inline struct FString ULowEntryRawSocketConnection::GetHost() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetHost");

	struct GetHost_Params {
		
		struct FString ReturnValue;

	}; GetHost_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntrySocketConnection.LowEntryRawSocketConnection.Disconnect
inline void ULowEntryRawSocketConnection::Disconnect() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntryRawSocketConnection.Disconnect");

	struct Disconnect_Params {
		
	}; Disconnect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntrySocketConnection.LowEntryRawSocketConnection.Connect
inline void ULowEntryRawSocketConnection::Connect(struct Unknown WorldContextObject, struct Unknown LatentInfo, char& SUCCESS) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntryRawSocketConnection.Connect");

	struct Connect_Params {
		struct Unknown WorldContextObject;
		struct Unknown LatentInfo;
		char& SUCCESS;
	}; Connect_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SUCCESS = Params.SUCCESS;

}

// Function LowEntrySocketConnection.LowEntrySocketConnection.SetPeriodicConnectionValidationEnabled
inline void ULowEntrySocketConnection::SetPeriodicConnectionValidationEnabled(char Enabled) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntrySocketConnection.SetPeriodicConnectionValidationEnabled");

	struct SetPeriodicConnectionValidationEnabled_Params {
		char Enabled;
	}; SetPeriodicConnectionValidationEnabled_Params Params;

	Params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntrySocketConnection.LowEntrySocketConnection.SendUnreliableMessage
inline void ULowEntrySocketConnection::SendUnreliableMessage(struct TArray<Unknown>& Bytes) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntrySocketConnection.SendUnreliableMessage");

	struct SendUnreliableMessage_Params {
		struct TArray<Unknown>& Bytes;
	}; SendUnreliableMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Bytes = Params.Bytes;

}

// Function LowEntrySocketConnection.LowEntrySocketConnection.SendMessage
inline void ULowEntrySocketConnection::SendMessage(struct TArray<Unknown>& Bytes) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntrySocketConnection.SendMessage");

	struct SendMessage_Params {
		struct TArray<Unknown>& Bytes;
	}; SendMessage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Bytes = Params.Bytes;

}

// Function LowEntrySocketConnection.LowEntrySocketConnection.SendLatentFunctionCall
inline void ULowEntrySocketConnection::SendLatentFunctionCall(struct Unknown WorldContextObject, struct Unknown LatentInfo, enum class Unknow Branch, struct TArray<Unknown>& Bytes, char& Failed, char& Canceled, struct TArray<Unknown>& ResponseBytes, float Timeout) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntrySocketConnection.SendLatentFunctionCall");

	struct SendLatentFunctionCall_Params {
		struct Unknown WorldContextObject;
		struct Unknown LatentInfo;
		enum class Unknow Branch;
		struct TArray<Unknown>& Bytes;
		char& Failed;
		char& Canceled;
		struct TArray<Unknown>& ResponseBytes;
		float Timeout;
	}; SendLatentFunctionCall_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.LatentInfo = LatentInfo;
	Params.Branch = Branch;
	Params.Timeout = Timeout;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Bytes = Params.Bytes;
	Failed = Params.Failed;
	Canceled = Params.Canceled;
	ResponseBytes = Params.ResponseBytes;

}

// Function LowEntrySocketConnection.LowEntrySocketConnection.SendFunctionCall
inline void ULowEntrySocketConnection::SendFunctionCall(struct Unknown WorldContextObject, struct Unknown LatentInfo, struct TArray<Unknown>& Bytes, char& SUCCESS, struct TArray<Unknown>& ResponseBytes, float Timeout) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntrySocketConnection.SendFunctionCall");

	struct SendFunctionCall_Params {
		struct Unknown WorldContextObject;
		struct Unknown LatentInfo;
		struct TArray<Unknown>& Bytes;
		char& SUCCESS;
		struct TArray<Unknown>& ResponseBytes;
		float Timeout;
	}; SendFunctionCall_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.LatentInfo = LatentInfo;
	Params.Timeout = Timeout;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Bytes = Params.Bytes;
	SUCCESS = Params.SUCCESS;
	ResponseBytes = Params.ResponseBytes;

}

// Function LowEntrySocketConnection.LowEntrySocketConnection.SendConnectionValidation
inline void ULowEntrySocketConnection::SendConnectionValidation(float Timeout) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntrySocketConnection.SendConnectionValidation");

	struct SendConnectionValidation_Params {
		float Timeout;
	}; SendConnectionValidation_Params Params;

	Params.Timeout = Timeout;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntrySocketConnection.LowEntrySocketConnection.IsPeriodicConnectionValidationEnabled
inline void ULowEntrySocketConnection::IsPeriodicConnectionValidationEnabled(char& Enabled) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntrySocketConnection.IsPeriodicConnectionValidationEnabled");

	struct IsPeriodicConnectionValidationEnabled_Params {
		char& Enabled;
	}; IsPeriodicConnectionValidationEnabled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Enabled = Params.Enabled;

}

// Function LowEntrySocketConnection.LowEntrySocketConnection.IsConnected
inline char ULowEntrySocketConnection::IsConnected() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntrySocketConnection.IsConnected");

	struct IsConnected_Params {
		
		char ReturnValue;

	}; IsConnected_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntrySocketConnection.LowEntrySocketConnection.GetPortUdp
inline int32_t ULowEntrySocketConnection::GetPortUdp() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntrySocketConnection.GetPortUdp");

	struct GetPortUdp_Params {
		
		int32_t ReturnValue;

	}; GetPortUdp_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntrySocketConnection.LowEntrySocketConnection.GetPort
inline int32_t ULowEntrySocketConnection::GetPort() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntrySocketConnection.GetPort");

	struct GetPort_Params {
		
		int32_t ReturnValue;

	}; GetPort_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntrySocketConnection.LowEntrySocketConnection.GetLocalPortUdp
inline int32_t ULowEntrySocketConnection::GetLocalPortUdp() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntrySocketConnection.GetLocalPortUdp");

	struct GetLocalPortUdp_Params {
		
		int32_t ReturnValue;

	}; GetLocalPortUdp_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntrySocketConnection.LowEntrySocketConnection.GetLocalPort
inline int32_t ULowEntrySocketConnection::GetLocalPort() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntrySocketConnection.GetLocalPort");

	struct GetLocalPort_Params {
		
		int32_t ReturnValue;

	}; GetLocalPort_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntrySocketConnection.LowEntrySocketConnection.GetHost
inline struct FString ULowEntrySocketConnection::GetHost() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntrySocketConnection.GetHost");

	struct GetHost_Params {
		
		struct FString ReturnValue;

	}; GetHost_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function LowEntrySocketConnection.LowEntrySocketConnection.Disconnect
inline void ULowEntrySocketConnection::Disconnect() {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntrySocketConnection.Disconnect");

	struct Disconnect_Params {
		
	}; Disconnect_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function LowEntrySocketConnection.LowEntrySocketConnection.Connect
inline void ULowEntrySocketConnection::Connect(struct Unknown WorldContextObject, struct Unknown LatentInfo, char& SUCCESS) {
	static auto fn = UObject::FindObject<UFunction>("Function LowEntrySocketConnection.LowEntrySocketConnection.Connect");

	struct Connect_Params {
		struct Unknown WorldContextObject;
		struct Unknown LatentInfo;
		char& SUCCESS;
	}; Connect_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SUCCESS = Params.SUCCESS;

}

