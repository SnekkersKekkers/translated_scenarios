MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc300",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I don't have much time left learning in
this classroom...)");
SEPlay("EV_SE_DOOR_019");
SEWait();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
VoicePlay("D130A00200_06_000");
MsgDisp("Himuro?","What's with this melancholy?");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(6,254,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Ah, ｛氷室＊＊｝...it's just that I
was thinking about how little time I have
left in this classroom.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D130A00200_06_010");
MsgDisp("Himuro","Ah, right.
I thought for sure you were thinking of
Ryota-senpai.");
MsgDisp("主人公","I wonder what ｛風真＊＊｝ is
doing at this moment?");
VoicePlay("D130A00200_02_000");
MsgDisp("Sassa?","Oh, you guys were here huh?
What are you two up do?");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChPosition(6,1);
MsgClose();
ChOpen(2,254,3,0,4,#1,#1,0,2);
VoicePlay("D130A00200_06_020");
MsgDisp("Himuro","We were just thinking about England.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("D130A00200_02_010");
MsgDisp("Sassa","Eh?
Ah, you're talking about Ryota.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("D130A00200_02_020");
MsgDisp("Sassa","Hmm, maybe he's having tea time.
When you think of England, you think of
afternoon tea right?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D130A00200_06_030");
MsgDisp("Himuro","It's early morning over there.");
MsgDisp("主人公","Hehe, it's breakfast time isn't it?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("D130A00200_02_030");
MsgDisp("Sassa","Then, is he sleeping?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,5);
VoicePlay("D130A00200_06_040");
MsgDisp("Himuro","Everyone sure is worried about Ryota-senpai.");
MsgDisp("主人公","what about you ｛氷室＊＊｝?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,0);
VoicePlay("D130A00200_06_050");
MsgDisp("Himuro","I'm not particularly worried.
He'll come home soon after all.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("D130A00200_02_040");
MsgDisp("Sassa","But, that guy suddenly disappeared around
elementary school and didn't come back for
10 years...");
MsgDisp("主人公","...Yeah...");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D130A00200_06_060");
MsgDisp("Himuro","Nozomu-senpai...
What are you going to achieve by making us
worry?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("D130A00200_02_050");
MsgDisp("Sassa","Ah, sorry sorry.
It'll be alright, he said he would come
back by graduation.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("D130A00200_06_070");
MsgDisp("Himuro","That's right.
Despite how he looks, he's earnest.
He'll be back before then.");
MsgDisp("主人公","Hehe, yeah that's right.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,1);
VoicePlay("D130A00200_02_060");
MsgDisp("Sassa","Okay.
Then, let's go home without Ryota, shall
we?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
BGMStop();
ChClose(2,0,30);
ChClose(6,0,30);
MsgDisp("主人公","(Yeah, it's just as ｛颯砂＊＊｝
and ｛氷室＊＊｝ says. You'll come
home soon, won't you
｛風真＊＊｝...)");
MsgClose();
ScrFadeOut(0);
ChLayout(1);
