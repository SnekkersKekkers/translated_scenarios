BGOpen("sc609",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I prepared the materials for the next
meeting...)");
VoicePlay("G110500800_40_000");
MsgDisp("School Boy","Good work today—
Please lock up.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
ChOpen(5,254,4,0,4,#1,#1,0,0);
VoicePlay("G110500800_05_000");
MsgDisp("Hiiragi","Yes.
Good work today.");
MsgDisp("主人公","Huh?
｛Hiiragi＊＊＊｝ is still here?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("G110500800_05_010");
MsgDisp("Hiiragi","Yes, I'm still not used to the computer.");
MsgDisp("主人公","Shall I take your place for a bit?");
MsgClose();
ScrFadeOut(0,0,30);
ChClose(5,0,0);
BGOpen("ev005",0);
MsgClose();
ChOpen(5,100,0,0,1,#1,#1,0,0);
SEPlay("EV_SE_712");
ScrFadeIn(0);
VoicePlay("G110500800_05_020");
MsgDisp("Hiiragi","No, I like doing things even if I'm bad at
them. I like sitting here doing student
council work.");
MsgDisp("主人公","I see.
Isn't it difficult when you're also busy
with the theater company?");
SEStop("EV_SE_712",0);
ChMotion(5,2);
VoicePlay("G110500800_05_030");
MsgDisp("Hiiragi","No.
I just want to feel like I'm of help to
Haba High.");
SEPlay("EV_SE_712",0,0.7,0.8);
ChMotion(5,0);
VoicePlay("G110500800_05_040");
MsgDisp("Hiiragi","Whether I'm actually helping is another
matter.");
MsgDisp("主人公","｛Hiiragi＊＊＊｝ is fantastic.
Everyone feels motivated to do their best
because of you.");
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,12);
SEStop("EV_SE_712",0);
VoicePlay("G110500800_05_050");
MsgDisp("Hiiragi","Just hearing you say that is a
relief...Thank you.");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
SEPlay("EV_SE_712");
MsgDisp("主人公","(It looks like ｛Hiiragi＊＊＊｝ ispushing
himself too hard after all...Even if it's
just a little, I want to help him.)");
BGMStop();
SEStop("EV_SE_712",1);
MsgClose();
ScrFadeOut(0,0);
