BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Looks like ｛氷室＊＊｝ hasn't
arrived yet...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("B110600002_35_000");
MsgDisp("?Boy","Well, well, well～?
Look at me for a bit!");
MsgDisp("主人公","...Eh, me?");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(35,254,0,0,0,#1,#1,0,0);
VoicePlay("B110600002_35_010");
MsgDisp("Guy","Yes, she's here, boom!
A golden egg after so long♪
Hey, are you interested in modelling?");
MsgDisp("主人公","M-Modelling?");
ChEye(35,1);
ChMouth(35,0);
VoicePlay("B110600002_35_020");
MsgDisp("Guy","Exactly! An acquaintance's friend's
acquaintance worked with the famous Hazuki
Kei you know. I could help you debut too!");
MsgDisp("主人公","Ehhh∋
That would be impossible for me...");
ChEye(35,0);
ChMouth(35,0);
VoicePlay("B110600002_35_030");
MsgDisp("Guy","Oh!
You can even make that kind of expression?
You'd totally nail acting too!～");
ChPosition(35,2);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
MsgClose();
ChOpen(6,253,2,2,1,0,#1,0,1,0,30);
BGMPlay("BGM_C06_INORI_A",0.01);
VoicePlay("B110600002_06_000");
MsgDisp("Himuro","She looks clearly troubled to me.");
MsgDisp("主人公","Ah, ｛氷室＊＊｝!");
MsgDispSksp(1,5);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B110600002_06_010");
MsgDisp("Himuro","Sorry I was late.
For now, let's move.");
MsgDispSksp(0);
ChEye(35,1);
ChMouth(35,1);
VoicePlay("B110600002_35_040");
MsgDisp("Guy","Wait up, wait up～?
Stealing is taboo, you know?");
ChEye(35,1);
ChMouth(35,1);
VoicePlay("B110600002_35_050");
MsgDisp("Guy","It's been years since I stepped away from
the spotlight... For me to make an offer
like this, it's super rare!");
MsgDispSksp(1,5);
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("B110600002_06_020");
MsgDisp("Himuro","...And?");
MsgDispSksp(0);
ChEye(35,1);
ChMouth(35,1);
ChEyeOpenLevel(35,0);
VoicePlay("B110600002_35_060");
MsgDisp("Guy","Uugh... you said that so cold.
Ah, could it be you're at that rebellious
age?");
MsgDispSksp(1,5);
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,1);
VoicePlay("B110600002_06_030");
MsgDisp("Himuro","... Ha?
Why would I be in a rebellious phase?");
MsgDispSksp(0);
ChEye(35,2);
ChMouth(35,1);
VoicePlay("B110600002_35_070");
MsgDisp("Guy","Hiee, that face is even more frightening!
I'll be going now～!");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
MsgClose();
ChClose(35);
ChPosition(6,0);
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("B110600002_06_040");
MsgDisp("Himuro","...Who's in a rebellious phase?");
MsgDisp("主人公","Um...
｛氷室＊＊｝?
Thank you very much.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("B110600002_06_050");
MsgDisp("Himuro","I'll tell you.
I can be friendly too!
Come on, let's go.");
MsgDisp("主人公","((???)
What happened to ｛氷室＊＊｝? )");
