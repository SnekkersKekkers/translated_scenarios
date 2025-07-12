BGOpen("sc130",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I have my part time job today!)");
VoiceEVSPlay(3);
VoicePlay("G110301000_03_000");
MsgDisp("Honda?","｛主人公｝. Wait up,wait up!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
BGMPlay("BGM_C03_HONDA_A");
ChOpen(3,254,0,0,0,#1,#1,0,0);
VoicePlay("G110301000_03_010");
MsgDisp("Honda","You're going to the part time job, right?");
MsgDisp("主人公","Ah, ｛本多＊＊｝.
Yes, that's right.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("G110301000_03_020");
MsgDisp("Honda","Yay, let's go together!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEWait();
MsgClose();
BGOpen("ev003",0);
ChOpen(3,100,0,0,1,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110301000_03_030");
MsgDisp("Honda","Since we came together today, it feels
like a continuation of school, right?");
MsgDisp("主人公","Yes, that's right.");
ChEye(3,2);
ChMouth(3,1);
ChMotion(3,1);
VoicePlay("G110301000_03_040");
MsgDisp("Honda","You see, until middle school, I would just
dwell in the library, so I didn't have any
experience with club activities.");
ChEye(3,0);
ChMouth(3,1);
ChMotion(3,0);
VoicePlay("G110301000_03_050");
MsgDisp("Honda","So, being with you like this after school
is kind of fun.");
MsgDisp("主人公","Hehe, now that I think about it, it looks
like we're library committee members.");
ChEye(3,1);
ChMouth(3,1);
ChMotion(3,1);
VoicePlay("G110301000_03_060");
MsgDisp("Honda","Right, right. Doing this together makes me
feel like we're in a club or committee.
It's the best!");
ChEye(3,0);
ChMouth(3,1);
ChMotion(3,2);
VoicePlay("G110301000_03_070");
MsgDisp("Honda","Plus, you get paid for your part time
job, you know?");
MsgDisp("主人公","Hehe, the manager will get angry with you?");
VoicePlay("G110301000_42_000");
MsgDisp("Manager","What are you two whispering about? 
Come on, I need help with the register.");
ChEye(3,1);
ChMouth(3,1);
ChMotion(3,0);
VoicePlay("G110301000_03_080");
MsgDisp("Honda","Okay, okay!");
MsgDisp("主人公","Yeees.");
ChEye(3,0);
ChMouth(3,1);
ChMotion(3,2);
VoicePlay("G110301000_03_090");
MsgDisp("Honda","Haha, please continue to take care of me!");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
