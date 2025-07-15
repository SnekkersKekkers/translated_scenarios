BGOpen("sc609",0);
ChLayout(1);
SEPlay("EV_SE_834",0.1);
ScrFadeIn(0);
VoicePlay("G110500700_40_000");
MsgDisp("Male Student","Opposite side!
Let's goー!");
MsgDisp("主人公","(The schoolyard is lively......
It looks like the boys are playing
soccer.)");
VoiceEVSPlay(5);
VoicePlay("G110500700_05_000");
MsgDisp("Hiiragi?","｛主人公｝, don't look away, okay?");
SEStop("EV_SE_834",2);
MsgClose();
ScrFadeOut(0,0,30);
BGOpen("ev005",0);
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
ChOpen(5,100,0,0,1,#1,#1,0,0);
SEPlay("EV_SE_712");
ScrFadeIn(0);
Wait(30,0);
VoicePlay("G110500700_05_010");
MsgDisp("Hiiragi","Haha, hasn't this happened before?");
MsgDisp("主人公","When ｛柊＊＊＊｝ scored his first goal?");
ChMotion(5,2);
ChEyeOpenLevel(5,8);
ChCheek(5,5);
SEStop("EV_SE_712",0);
VoicePlay("G110500700_05_020");
MsgDisp("Hiiragi","Yes.
I got too excited and fell over.");
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
MsgDisp("主人公","I was cheering from the classroom that
time, and got scolded by Mikage-sensei.");
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
ChCheek(5,0);
Wait(10,0);
ChEyeOpenLevel(5,12);
VoicePlay("G110500700_05_030");
MsgDisp("Hiiragi","That sounds like it was my fault.");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
SEPlay("EV_SE_712");
VoicePlay("G110500700_05_040");
MsgDisp("Hiiragi","Well, it was a rare defining moment,
wasn't it?");
MsgDisp("主人公","Hehe, yes.
I'm glad I didn't miss it.");
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
SEStop("EV_SE_712",0);
VoicePlay("G110500700_05_050");
MsgDisp("Hiiragi","I'd like to be able to say I can show you
anytime, but it's a bit difficult.");
SEPlay("EV_SE_712");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("G110500700_05_060");
MsgDisp("Hiiragi","I'm glad you happened to see it.
I'm sure if I told you, you wouldn't be
able to believe it.");
MsgDisp("主人公","Hehe!");
BGMStop();
SEStop("EV_SE_712",1);
MsgClose();
ScrFadeOut(0,0);
