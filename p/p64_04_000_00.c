MsgClose();
ChLayout(1);
ChEye(4,0);
ChMouth(4,4);
ChMotion(4,0);
ChEyeOpenLevel(4,0);
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("P640400000_04_000");
MsgDisp("Nanatsumori","Phew...");
MsgDisp("主人公","What do you think?");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("P640400000_04_010");
MsgDisp("Nanatsumori","Delicious.
Soothing...");
MsgDisp("主人公","I'm glad.
To suit ｛七ツ森＊｝'s tastes more, I
added a little bit of honey.");
VoicePlay("P640400000_04_020");
MsgDisp("Nanatsumori","Actually?
The slight sweetness is seriously good.
You did a good job, huh?");
MsgDisp("主人公","(Yay!
I was praised by ｛七ツ森＊｝!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
BGMStop();
