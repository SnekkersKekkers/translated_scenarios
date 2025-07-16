BGOpen("sc000",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I'm heading home late today......
But thanks to that, I get to see a
beautiful sunset.)");
VoicePlay("D010200000_02_000");
MsgDisp("Sassa?","Hey!");
MsgDisp("主人公","Huh?
Is that......
｛颯砂＊＊｝?");
VoicePlay("D010200000_02_010");
MsgDisp("Sassa","Over here!
Come this way!");
MsgDisp("主人公","O-Okay!");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMPlay("BGM_C02_SASSA_C",0.01);
StlOpen("ev_02_05");
StlEye(2,3);
StlMouth(2,1);
SEPlay("EV_SE_532",3,0.6);
ScrFadeIn(0);
VoicePlay("D010200000_02_020");
MsgDisp("Sassa","Aaaah......!
That feels good!");
MsgDisp("主人公","｛颯砂＊＊｝ are you done
training for today?");
StlEye(2,1);
StlMouth(2,1);
StlEyeOpenLevel(2,5,1);
VoicePlay("D010200000_02_030");
MsgDisp("Sassa","Haha, yeah.
Now it's time to play.");
MsgDisp("主人公","Hehe, I see.");
StlEye(2,1);
StlMouth(2,1);
VoicePlay("D010200000_02_040");
MsgDisp("Sassa","Right, you should take off your shoes too.");
MsgDisp("主人公","Eh......
The water looks cold.");
StlEye(2,3);
StlMouth(2,1);
VoicePlay("D010200000_02_050");
MsgDisp("Sassa","Yeah, it's really cold!
See!");
ScrFadeOut(0,0,30);
SEPlay("EV_SE_607");
SEWait();
MsgDisp("主人公","Kyaaa!
Cold!");
StlClose();
BGOpen("wf620",1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMVol(0.5,2);
ScrFadeIn(0);
SEPlay("EV_SE_608");
SEWait();
ChOpen(2,254,3,3,3,#1,#1,0,0);
VoicePlay("D010200000_02_060");
MsgDisp("Sassa","Ah, that's my bad.
My hand slipped!");
MsgDisp("主人公","Geez......");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,3);
ChEyeOpenLevel(2,0);
VoicePlay("D010200000_02_070");
MsgDisp("Sassa","Hahaha!");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("D010200000_02_080");
MsgDisp("Sassa","Ah......
I got a bit carried away.
My pants are wet.");
MsgDisp("主人公","You get what you deserve!");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,4);
VoicePlay("D010200000_02_090");
MsgDisp("Sassa","Sorry.
Training went well today, the sunset is
beautiful, and then you showed up.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,0);
VoicePlay("D010200000_02_100");
MsgDisp("Sassa","When all the excitement piles up like
that, I just can't help it.");
MsgDisp("主人公","?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("D010200000_02_110");
MsgDisp("Sassa","I was surprised to see you here.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("D010200000_02_120");
MsgDisp("Sassa","Under the light of the setting sun, you
looked beautiful, like a goddess.");
MsgDisp("主人公","｛颯砂＊＊｝......");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,4);
VoicePlay("D010200000_02_130");
MsgDisp("Sassa","......Maybe that was too much.");
MsgDisp("主人公","!");
SEPlay("EV_SE_580");
BGMStop();
MsgClose();
ChClose(2);
VoicePlay("D010200000_02_140");
MsgDisp("Sassa","Sorry, but you really did look beautiful!");
MsgDisp("主人公","Geez, I don't believe you!");
MsgClose();
ScrFadeOut(0);
ChPrmTblAdd(2,0);
