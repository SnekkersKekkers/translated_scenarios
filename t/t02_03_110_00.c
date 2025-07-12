BGOpen("ex170",0);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("T020311000_03_000");
MsgDisp("Honda?","｛主人公｝,
I don't want you to go that far.");
SEPlay("EV_SE_872",0.5);
Wait(50,0);
ChOpen(3,254,0,0,4,#1,#1,0,0);
MsgDisp("主人公","Eh......｛本多＊＊｝?");
ChMotion(3,4,1);
VoicePlay("T020311000_03_010");
MsgDisp("Honda","Come with me.");
MsgDisp("主人公","Wh-what's wrong?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("T020311000_03_020");
MsgDisp("Honda","Sorry.
I have to do this now.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
SEPlay("EV_SE_504",0.2,0.7);
Wait(40,0);
VoicePlay("T020311000_03_030");
MsgDisp("Honda","So, come.");
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("sc231",0);
SEPlay("EV_SE_DOOR_011",0,1);
Wait(60,0);
ScrFadeIn(0);
SEWait();
MsgDisp("主人公","The rooftop......");
VoicePlay("T020311000_03_040");
MsgDisp("Honda","Yeah, it's nice here. I asked you a lot of
different questions here.");
MsgClose();
ScrFadeOut(0,1);
MsgType(1);
BGOpen("ex980",0);
ChLayout(0);
ChOpen(3,254,0,0,4,#1,#1,0,0);
BGMPlay("BGM_C03_HONDA_KOKU",0.01);
ScrFadeIn(0);
MsgDisp("主人公","｛本多＊＊｝……?");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("T020311000_03_050");
MsgDisp("Honda","I've been searching for something I can
devote my life to.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
VoicePlay("T020311000_03_060");
MsgDisp("Honda","I used to think it was in a book.
So I read every book I could find.
But I couldn't find it.");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("T020311000_03_070");
MsgDisp("Honda","So, I met you, we became friends,
and then we drifted apart a little,
and then I finally became convinced.");
ChEye(3,0);
ChMouth(3,0);
VoicePlay("T020311000_03_080");
MsgDisp("Honda","You're the one I've been looking for since
I was little.");
MsgDisp("主人公","Eh?");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("T020311000_03_090");
MsgDisp("Honda","I did give up once. I told myself it was
just my imagination. I told myself I was
jumping to conclusions like usual.");
ChEye(3,2);
ChMouth(3,3);
ChMotion(3,2,1);
VoicePlay("T020311000_03_100");
MsgDisp("Honda","Haa......but, 
but I couldn't deceive myself.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("T020311000_03_110");
MsgDisp("Honda","Because, I'm certain it's you.");
MsgDisp("主人公","｛本多＊＊｝……");
MsgClear();
ChClose(3);
ChCustomLayout(3,5,0,-2.5);
Wait(60);
SEPlay("EV_SE_544");
ChOpen(3,254,7,4,4,#1,#1,0,0,0,120);
VoicePlay("T020311000_03_120");
MsgDisp("Honda","I don't shy away from anyone anymore.");
ChMotion(3,4,1);
ChEyeOpenLevel(3,0);
VoicePlay("T020311000_03_130");
MsgDisp("Honda","I found the one thing I can devote my life
to, is you.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("T020311000_03_140");
MsgDisp("Honda","My beloved,
from now on,
please stay by my side forever.");
