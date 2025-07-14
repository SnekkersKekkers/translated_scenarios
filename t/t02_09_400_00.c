MsgType(1);
BGOpen("ex980",0);
VoicePlay("T020940000_09_000");
MsgDisp("Kuya?","I'm glad, I made it in time......");
MsgClear();
Wait(60);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C09_KUYA_KOKU",0.01);
ChLayout(0);
ChOpen(9,255,0,2,0,#1,#1,3,0);
ScrFadeIn(0);
ChMotion(9,1,1);
VoicePlay("T020940000_09_010");
MsgDisp("Kuya","Haa......
Oh no, I've done it.");
MsgDisp("主人公","Kuya-san∋
Why are you here......?");
ChEye(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,8);
VoicePlay("T020940000_09_020");
MsgDisp("Kuya","Is that what you're asking me? ");
MsgDisp("主人公","Eh......");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,10);
ChCheek(9,0);
VoicePlay("T020940000_09_030");
MsgDisp("Kuya","This is the legendary place of Habataki
High, isn't it?");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,0);
VoicePlay("T020940000_09_040");
MsgDisp("Kuya","Well...... I accidentally ended up at
Hanegasaki lighthouse...... so I hurried
over here.");
ChEye(9,0);
ChEyeOpenLevel(9,10);
MsgDisp("主人公","Eh......?");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
VoicePlay("T020940000_09_050");
MsgDisp("Kuya","A last second, unexpected event.");
MsgDisp("主人公","Hehe......!");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,8);
VoicePlay("T020940000_09_060");
MsgDisp("Kuya","Now, this is where the real thing starts.");
ChEye(9,0);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,10);
VoicePlay("T020940000_09_070");
MsgDisp("Kuya","Today is the day it all ends.
I want you to hear my confession now.");
MsgDisp("主人公","Yes......");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,2,1);
ChEyeOpenLevel(9,6);
VoicePlay("T020940000_09_080");
MsgDisp("Kuya","......That being said, I've expressed my
feelings quite a bit up until now.");
ChEye(9,0);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,10);
VoicePlay("T020940000_09_090");
MsgDisp("Kuya","You saved a man whose life was so
hopelessly boring.");
ChEye(9,0);
ChMouth(9,4);
ChMotion(9,4,1);
VoicePlay("T020940000_09_100");
MsgDisp("Kuya","You were a guide to the right path for a
foolish man who misunderstood what it
meant to think about others.");
ChEye(9,0);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,0);
VoicePlay("T020940000_09_110");
MsgDisp("Kuya","Today, on this day, and up to this very
moment, you have been by my side......
Thank you.");
ChEye(9,0);
ChEyeOpenLevel(9,10);
MsgDisp("主人公","No......");
MsgClear();
ChClose(9);
ChCustomLayout(9,5,0,-2.8);
Wait(60);
SEPlay("EV_SE_544");
ChOpen(9,255,4,4,4,#1,#1,0,0,0,120);
VoicePlay("T020940000_09_120");
MsgDisp("Kuya","I love you.
All I see is you now.");
ChEye(9,0);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,8);
VoicePlay("T020940000_09_130");
MsgDisp("Kuya","Always, always, be by my side.");
