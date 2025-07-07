BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Hm... looks like ｛本多＊＊｝ isn't here
yet.");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","｛本多＊＊｝'s late...");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(33,254,0,0,0,-1,-1,0,0);
VoicePlay("B110300000_33_000");
MsgDisp("Guy","Another lost child. Don't worry, I'm here.");
MsgDisp("主人公","∋
Er..?");
ChEye(33,0);
ChMouth(33,0);
ChEyeOpenLevel(33,8);
VoicePlay("B110300000_33_010");
MsgDisp("Guy","You're lost right now. That's why you
knocked on my door. All you have to do is
take a step forward. Let's go
together——");
ChPosition(33,1);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C03_HONDA_A",0.01);
MsgClose();
ChOpen(3,253,3,3,3,-1,-1,0,2);
VoicePlay("B110300000_03_000");
MsgDisp("Honda","Me too, me too!");
MsgDisp("主人公","Oh, ｛本多＊＊｝∋");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
MsgDispSksp(1,5);
VoicePlay("B110300000_03_010");
MsgDisp("Honda","I'll go with you and knock on the door
too. That's fine, right?");
MsgDispSksp(0);
ChEye(33,1);
ChMouth(33,1);
VoicePlay("B110300000_33_020");
MsgDisp("Guy","W-What's with you... ugh. I can only
handle one person at a time.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
MsgDispSksp(1,5);
VoiceEVSPlay(3);
VoicePlay("B110300000_03_020");
MsgDisp("Honda","｛主人公｝. If it's just one, 
you'll let me go first, right?");
MsgDispSksp(0);
MsgDisp("主人公","Huh? Sure... go ahead!");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
MsgDispSksp(1,5);
VoicePlay("B110300000_03_030");
MsgDisp("Honda","Alrighty! Looking forward to it!");
MsgDispSksp(0);
ChEye(33,1);
ChMouth(33,1);
ChEyeOpenLevel(33,0);
VoicePlay("B110300000_33_030");
MsgDisp("Guy","Tch, enough! It's clear you're not lost
at all.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(33,0,30);
ChPosition(3,0);
MsgDisp("主人公","｛本多＊＊｝, thanks so much.");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("B110300000_03_040");
MsgDisp("Honda","No, I'm sorry for being late. I'm glad I
made it in time, before you went to knock
on the door.");
MsgDisp("主人公","Haha.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B110300000_03_050");
MsgDisp("Honda","Alright, let's refocus. Let's go!");
