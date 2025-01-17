// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection {

public:

	struct Unknown MediaSource; // 0xE0 (8)
	char bLoop : 0; // 0xE8 (1)
};

// Class MediaCompositing.MovieSceneMediaSection
class UMovieSceneMediaSection : public UMovieSceneSection {

public:

	struct Unknown MediaSource; // 0xE0 (8)
	char bLooping : 0; // 0xE8 (1)
	struct Unknown StartFrameOffset; // 0xEC (4)
	struct Unknown MediaTexture; // 0xF0 (8)
	struct Unknown MediaSoundComponent; // 0xF8 (8)
	char bUseExternalMediaPlayer : 0; // 0x100 (1)
	struct Unknown ExternalMediaPlayer; // 0x108 (8)
};

// Class MediaCompositing.MovieSceneMediaTrack
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<Unknown> MediaSections; // 0x58 (16)
};

// ScriptStruct MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct Unknown MediaSource; // 0x48 (8)
	struct Unknown SectionStartFrame; // 0x50 (4)
	char bLoop : 0; // 0x54 (1)
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate {
	struct Unknown Params; // 0x20 (48)
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
struct FMovieSceneMediaSectionParams {
	struct Unknown MediaSoundComponent; // 0x0 (8)
	struct Unknown MediaSource; // 0x8 (8)
	struct Unknown MediaTexture; // 0x10 (8)
	struct Unknown MediaPlayer; // 0x18 (8)
	struct Unknown SectionStartFrame; // 0x20 (4)
	struct Unknown SectionEndFrame; // 0x24 (4)
	char bLooping : 0; // 0x28 (1)
	struct Unknown StartFrameOffset; // 0x2C (4)
};

