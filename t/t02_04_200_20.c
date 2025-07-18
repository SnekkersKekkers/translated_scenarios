ChEye(4,4);
ChMouth(4,4);
MsgDisp("主人公","Me too...
I also like ｛七ツ森＊｝.");
ChEye(4,2);
ChMouth(4,4);
ChCheek(4,8);
VoicePlay("T020420000_04_110");
MsgDisp("Nanatsumori","Really...?");
MsgDisp("主人公","Do you...not believe me?");
ChEye(4,4);
ChMouth(4,0);
ChMotion(4,2,1);
VoicePlay("T020420000_04_120");
MsgDisp("Nanatsumori","Wow...
This is so great, it feels like I'm
dreaming...");
MsgDisp("主人公","Hehe, but it's not a dream, you know?");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
ChCheek(4,0);
VoicePlay("T020420000_04_130");
MsgDisp("Nanatsumori","I see...
Haha!");
ChEye(4,4);
ChMouth(4,3);
VoicePlay("T020420000_04_140");
MsgDisp("Nanatsumori","I really should be thankful to those guys.");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("T020420000_04_150");
MsgDisp("Nanatsumori","But, before that. ...come here.");
MsgDisp("主人公","Yes.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(4,0,0);
Wait(120,0);
StlOpen("ev_04_17");
ScrFadeIn(0);
VoicePlay("T020420000_04_160");
MsgDisp("Nanatsumori","I love you. From now on please continue
looking at me...Look only at me.");
StlEffect(1,1,60);
Wait(60,0);
SEPlay("EV_SE_695");
Wait(120,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(160,0);
SEStop("EV_SE_695",3.5);
Wait(220,0);
