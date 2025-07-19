BGOpen("fp200",0);
ChLayout(1);
MsgClose();
ChOpen(8,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B050800000_08_000");
MsgDisp("Shirahane","Hey.
Wanna take a walk around the pond?");
MsgDisp("主人公","Yeah, okay.");
MsgClose();
SEPlay("EV_SE_767");
ChClose(8,0,30);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(8,255,4,2,0,#1,#1,0,0);
VoicePlay("B050800000_08_010");
MsgDisp("Shirahane","Hmmm...");
MsgDisp("主人公","?");
VoicePlay("B050800000_08_020");
MsgDisp("Shirahane","I don't know if they're movin'...");
MsgDisp("主人公","???");
ChEye(8,0);
ChMouth(8,4);
VoicePlay("B050800000_08_030");
MsgDisp("Shirahane","...Hm?");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,1,1);
VoicePlay("B050800000_08_040");
MsgDisp("Shirahane","They're here∈ There they are!");
MsgClose();
SEPlay("EV_SE_672");
ChClose(8,0,30);
MsgDisp("主人公","Eh, ｛大地＊＊｝∋");
MsgClose();
ScrFadeOut(0);
StlOpen("ev_08_01");
StlEye(8,0);
StlMouth(8,0);
SEPlay("EV_SE_718");
SEWait();
BGMPlay("BGM_C08_DAICHI_B",0.01);
ScrFadeIn(0);
Wait(50,0);
VoicePlay("B050800000_08_050");
MsgDisp("Shirahane","Mr.
Koi, Mr Koi, please listen to me...");
MsgDisp("主人公","Waa, there's so many beautiful koi!");
VoicePlay("B050800000_08_060");
MsgDisp("Shirahane","Please give me your heart's blessing...");
MsgDisp("主人公","(Heart's blessing?)");
MsgDisp("主人公","Ah.
Ah, hat koi has a love heart marking!");
StlEye(8,1);
StlMouth(8,1);
VoicePlay("B050800000_08_070");
MsgDisp("Shirahane","That's right!
That koi isn't just any koi; it's the
Cupid of this pond.");
StlEye(8,1);
StlMouth(8,1);
StlEyeOpenLevel(8,5);
VoicePlay("B050800000_08_080");
MsgDisp("Shirahane","I'm sure it'll fulfill your love too.");
MsgDisp("主人公","Eh, yeah.");
StlEye(8,0);
StlMouth(8,0);
VoicePlay("B050800000_08_090");
MsgDisp("Shirahane","For this girl here too, alright?
Please bring a wonderful love to both of
us...");
VoicePlay("B050800000_08_100");
MsgDisp("Shirahane","Please, I ask of you...
Amenー...");
MsgDisp("主人公","(｛大地＊＊｝ is serious...)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlClose();
BGMVol(0.5,2);
ChOpen(8,255,0,3,3,0,#1,0,0);
ScrFadeIn(0);
ChMotion(8,3,1);
VoicePlay("B050800000_08_110");
MsgDisp("Shirahane","Alright, with this we can relax!");
MsgDisp("主人公","｛大地＊＊｝, you did well to
find that heart koi!");
ChEye(8,2);
ChMouth(8,3);
ChMotion(8,0,1);
VoicePlay("B050800000_08_120");
MsgDisp("Shirahane","Actually, I heard it from m older sister.
She knows all the good info.");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,2,1);
ChEyeOpenLevel(8,0);
VoicePlay("B050800000_08_130");
MsgDisp("Shirahane","Hehe Today is my super lucky day▼");
MsgDisp("主人公","(｛大地＊＊｝ is in a super good mood.
He even asked on my behalf.)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChPrmTblAdd(8,0);
