BGOpen("sc210",0);
ScrFadeIn(0);
MsgDisp("主人公","(Umm, What's the class I take in the
afternoon again...?)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C07_MIKAGE_A");
ChOpen(7,37,0,0,0,#1,#1,0,0);
VoiceEVSPlay(7);
VoicePlay("G110700300_07_000");
MsgDisp("Mikage","｛主人公｝.
Are you a bit lost?");
MsgDisp("主人公","Ah, ｛御影＊＊｝.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("G110700300_07_010");
MsgDisp("Mikage","Ah, or maybe not.
It can't be helped.
Hey, come over here.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
ChClose(7);
SEWait();
BGOpen("ev007",0);
MsgClose();
ChOpen(7,100,2,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110700300_07_020");
MsgDisp("Mikage","Look at this.
My plants all look healthy and shiny.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700300_07_030");
MsgDisp("Mikage","Just like you.");
MsgDisp("主人公","Huh...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700300_07_040");
MsgDisp("Mikage","Uh... forget what I said.
You're a pretty girl, so try to shine.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700300_07_050");
MsgDisp("Mikage","You're the type to take everything
seriously, whether it's studying or
playing, right?");
MsgDisp("主人公","Umm...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G110700300_07_060");
MsgDisp("Mikage","Serious-chan in my class who takes
everything seriously.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700300_07_070");
MsgDisp("Mikage","Try to do better on the next text.
Okay?");
SEPlay("EV_SE_SCHOOL_002");
Wait(30,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G110700300_07_080");
MsgDisp("Mikage","Look, afternoon classes are starting.
See you later.");
MsgDisp("主人公","(｛御影＊＊｝...
Maybe he was concerned about the test I
did badly in the other day...?)");
SEStop("EV_SE_SCHOOL_002",1);
BGMStop();
MsgClose();
ScrFadeOut(0,0);
