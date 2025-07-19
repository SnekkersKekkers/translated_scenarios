BGOpen("ev005",0);
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
ChOpen(5,100,0,0,0,#1,#1,0,0);
SEPlay("EV_SE_712");
ScrFadeIn(0);
MsgDisp("主人公","｛柊＊＊＊｝, your typing on the computer
has become much faster.");
ChMouth(5,1);
VoicePlay("G110500702_05_000");
MsgDisp("Hiiragi","Really?
That makes me glad.");
SEStop("EV_SE_712",0);
SEPlay("EV_SE_711",0,0.8);
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,12);
SEWait();
VoicePlay("G110500702_05_010");
MsgDisp("Hiiragi","What do you think?");
MsgDisp("主人公","Yeah, it's cool.
Working hard at the student council every
day.");
SEPlay("EV_SE_712");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
VoicePlay("G110500702_05_020");
MsgDisp("Hiiragi","Yeah.
Maybe it's because of that day.
That I've learned to type faster.");
MsgDisp("主人公","That day?");
ChEyeOpenLevel(5,0);
Wait(10,0);
ChMotion(5,2);
ChEyeOpenLevel(5,8);
SEStop("EV_SE_712",0);
VoicePlay("G110500702_05_030");
MsgDisp("Hiiragi","The day we went to the firefly's habitat
and got that power.");
MsgDisp("主人公","Ah...the day we drank spring water?");
SEPlay("EV_SE_712",0,0.7,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChMotion(5,0);
ChEyeOpenLevel(5,#1);
VoicePlay("G110500702_05_040");
MsgDisp("Hiiragi","Yeah. My right hand was from the spring
water, my left hand was from your help.
...See.");
SEStop("EV_SE_712",0);
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
Wait(50,0);
VoicePlay("G110500702_05_050");
MsgDisp("Hiiragi","Wonder why my left hand is better?
It's because of you.");
MsgDisp("主人公","Hehe!");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
