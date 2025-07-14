BGOpen("ar600",0);
ChLayout(1);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("G110300601_03_000");
MsgDisp("Honda?","｛主人公｝, good work.");
MsgClose();
BGMPlay("BGM_C03_HONDA_A");
ChOpen(3,35,0,0,3,#1,#1,0,0);
VoicePlay("G110300601_03_010");
MsgDisp("Honda","This is a message from the manager.
They're entrusting the monthly staff book
recommendation to you.");
MsgDisp("主人公","Ehh∋　Me?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
ChEyeOpenLevel(3,0);
VoicePlay("G110300601_03_020");
MsgDisp("Honda","Right, right, if the manager didn't trust
you, they wouldn't let you give monthly
recommendations to the customer, would
they?");
MsgDisp("主人公","｛本多＊＊｝, what should I do......");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("G110300601_03_030");
MsgDisp("Honda","It'll be okay if you think through it
carefully.
Hey, there's a customer!");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(3);
MsgDisp("主人公","I'm happy, but it's a big
responsibility......");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev003",0);
ChOpen(3,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("G110300601_03_040");
MsgDisp("Honda","｛主人公｝. How is it? Have you decided
on a recommendation?");
MsgDisp("主人公","No, not at all.......");
ChEye(3,1);
ChMouth(3,1);
ChMotion(3,1);
VoicePlay("G110300601_03_050");
MsgDisp("Honda","Enjoy yourself more!");
ChEye(3,0);
ChMouth(3,1);
ChMotion(3,2);
VoicePlay("G110300601_03_060");
MsgDisp("Honda","Right. How about simply recommending a
book you read recently, one that had you
trembling in excitement?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("G110300601_03_070");
MsgDisp("Honda","Anything?");
MsgDisp("主人公","Umm......something I read recently......
How about 'Habatcher'?");
ChEye(3,0);
ChMouth(3,1);
ChMotion(3,1);
VoicePlay("G110300601_03_080");
MsgDisp("Honda","A magazine∋
Yep yep, it's good.
That's so 'you', nice perspective!");
MsgDisp("主人公","(Is it really okay......?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
