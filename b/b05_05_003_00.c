MsgClose();
ScrFadeOut(0);
ChClose(5,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("tr110",1);
ChLayout(1);
MsgClose();
ChOpen(5,32,0,2,4,0,#1,0,0);
ScrFadeIn(0);
ChEye(5,2);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
VoicePlay("B050500300_05_000");
MsgDisp("Hiiragi","Phew...
I managed to do it without hurting myself.");
MsgDisp("主人公","｛柊＊＊＊｝, did you have fun?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B050500300_05_010");
MsgDisp("Hiiragi","No need to worry.
Besides, I found something new to look
forward to.");
MsgDisp("主人公","Eh, what is it?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B050500300_05_020");
MsgDisp("Hiiragi","After this it seems that the Igloo Cafe
next to the rest house will be open.");
MsgDisp("主人公","That sounds really fun...!");
SEPlay("EV_SE_774");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
SEWait();
Wait(50,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
StlOpen("ev_05_05");
StlEye(5,1);
StlMouth(5,0);
ScrFadeIn(0);
VoicePlay("B050500300_05_030");
MsgDisp("Hiiragi","Well then, I'm glad today ended safely——");
StlEyeOpenLevel(5,5);
StlMouth(5,1);
VoicePlay("B050500300_05_040");
MsgDisp("Hiiragi","Cheers.");
MsgDisp("主人公","Hehe, cheers.");
SEPlay("EV_SE_730");
SEWait();
StlEye(5,0);
VoicePlay("B050500300_05_050");
MsgDisp("Hiiragi","Amazake really warms you up, huh?");
StlEye(5,1);
MsgDisp("主人公","Yeah, it's delicious.");
StlEye(5,1);
StlMouth(5,0);
VoicePlay("B050500300_05_060");
MsgDisp("Hiiragi","A long time ago, I attended elementary
school in Tohoku for a short period. At
that time, we built an igloo in the school
yard.");
MsgDisp("主人公","Eh...that's amazing!");
StlEyeOpenLevel(5,5);
StlMouth(5,0);
VoicePlay("B050500300_05_070");
MsgDisp("Hiiragi","I took it quite seriously.
It was made as a shrine to the water gods.");
StlEye(5,0);
StlMouth(5,1);
VoicePlay("B050500300_05_080");
MsgDisp("Hiiragi","But I never got to go inside.
Before I was able to complete it, I
transferred schools.");
MsgDisp("主人公","I see...");
StlEye(5,1);
StlEyeOpenLevel(5,5,1);
StlMouth(5,0);
VoicePlay("B050500300_05_090");
MsgDisp("Hiiragi","You're making that face again.
That is pretty much all there is to that
story.");
StlEyeOpenLevel(5,#1);
StlMouth(5,1);
VoicePlay("B050500300_05_100");
MsgDisp("Hiiragi","If you look at me like that every time, I
won't be able to talk about my past.");
MsgDisp("主人公","It's fine...");
StlEye(5,0);
StlMouth(5,0);
VoicePlay("B050500300_05_110");
MsgDisp("Hiiragi","Look though.
It's been a few years but I was finally
able to go inside an igloo.");
StlEye(5,1);
StlEyeOpenLevel(5,5,1);
StlMouth(5,1);
VoicePlay("B050500300_05_120");
MsgDisp("Hiiragi","On top of that, although there may be no
water goddess, there's another beautiful
goddess here.");
MsgDisp("主人公","Eh...");
StlEyeOpenLevel(5,0,1);
StlMouth(5,0);
VoicePlay("B050500300_05_130");
MsgDisp("Hiiragi","Huh, perhaps I'm a bit drunk?");
MsgDisp("主人公","Hehe, geez.
I guess it's the amazake.");
StlEyeOpenLevel(5,#1);
StlMouth(5,1);
VoicePlay("B050500300_05_140");
MsgDisp("Hiiragi","Haha, you finally laughed.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
StlClose();
MsgDisp("主人公","(Thank you, ｛柊＊＊＊｝.
Including the skiing, I also got to make
some wonderful memories...)");
MsgClose();
Wait(40,0);
ChPrmTblAdd(5,0);
