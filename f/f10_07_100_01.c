ChLayout(1);
BGOpen("sc510",0);
ScrFadeIn(0);
MsgDisp("主人公","(I have class with
｛御影＊＊｝ next. I
wonder if there's anything to prepare...
I'll stop by the science preparation
room.)");
SEPlay("EV_SE_FOOT_WALK_KEEP_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
SEPlay("EV_SE_DOOR_024");
SEWait();
VoicePlay("F100710001_07_000");
MsgDisp("Mikage","Oh, come in～");
SEPlay("EV_SE_DOOR_019");
MsgDisp("主人公","Please excuse me.");
MsgClose();
BGOpen("sc351",0);
BGMPlay("BGM_C07_MIKAGE_A",0.01);
ChOpen(7,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("F100710001_07_010");
MsgDisp("Mikage","Welcome.");
MsgDisp("主人公","Is there anything you need prepared?");
ChEye(7,0);
ChMouth(7,3);
VoicePlay("F100710001_07_020");
MsgDisp("Mikage","Ooh, thanks.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("F100710001_07_030");
MsgDisp("Mikage","I've already finished changing clothes for
the day, so I'm all good.");
MsgDisp("主人公","Hehe, yes.
It looks good.");
ChEye(7,0);
ChMouth(7,3);
VoicePlay("F100710001_07_040");
MsgDisp("Mikage","Ooh, I see.
You prefer this one too?");
MsgDisp("主人公","Umm, the coveralls are very
｛御影＊＊｝ -like, so I
think it's nice.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100710001_07_050");
MsgDisp("Mikage","Ohh, you know your stuff. The contrast of
the suits and coveralls are nice. You're
an adult since you can understand that.");
MsgDisp("主人公","You bike to work in overalls in the
morning, right?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("F100710001_07_060");
MsgDisp("Mikage","Yeah, I can just go straight to the
gardening club's field, so it's efficient,
right?");
MsgDisp("主人公","Is that the suit over there?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100710001_07_070");
MsgDisp("Mikage","Yes, this is the suit.");
SEPlay("EV_SE_SCHOOL_002");
Wait(60,0);
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("F100710001_07_080");
MsgDisp("Mikage","Alright, we can go to the classroom
together today.");
MsgDisp("主人公","Hehe, yes.");
BGMStop();
SEStop("EV_SE_SCHOOL_002");
MsgClose();
ScrFadeOut(0,0);
