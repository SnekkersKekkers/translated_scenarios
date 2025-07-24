BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Huh..
Looks like ｛風真＊＊｝ isn't here yet...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","｛風真＊＊｝ sure is late...");
VoicePlay("B110100002_35_000");
MsgDisp("Guy?","Hmm, I can't do this without getting at
least one. I finally found my cash cow...
no, I mean, talent!");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(35,254,0,1,0,#1,#1,0,0);
VoicePlay("B110100002_35_010");
MsgDisp("Guy","Eh?
It's here, it's here, my money maker～!");
MsgDisp("主人公","Eh∋
Money maker?");
ChEye(35,0);
ChMouth(35,0);
VoicePlay("B110100002_35_020");
MsgDisp("Guy","Yeah, I won't let other agencies have you.
How about we cut out the middle man and do
80 percent management?");
MsgDisp("主人公","What does that mean?");
ChEye(35,2);
ChMouth(35,0);
VoicePlay("B110100002_35_030");
MsgDisp("Guy","Ehh∋
The kids these days are sharp.
Okay, let's split it 50-50!");
MsgDisp("主人公","U-Um...");
ChEye(35,0);
ChMouth(35,0);
ChEyeOpenLevel(35,0);
VoicePlay("B110100002_35_040");
MsgDisp("Guy","No more than this.
Alright, let's settle here!");
ChPosition(35,2);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
BGMPlay("BGM_C01_RYOUTA_A",0.01);
MsgClose();
ChOpen(1,253,0,0,2,8,#1,0,1,0,30);
ChMotion(1,3);
VoicePlay("B110100002_01_000");
MsgDisp("Kazama","Oi, what business do you have with her?");
ChEye(35,2);
ChMouth(35,0);
VoicePlay("B110100002_35_050");
MsgDisp("Guy","Wow, cha-ching!
Second box!
We also manage male talent!");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("B110100002_01_010");
MsgDisp("Kazama","Are you alright?
He hasn't done anything to you?");
MsgDisp("主人公","Yeah, I'm alright.");
ChEye(35,1);
ChMouth(35,0);
VoicePlay("B110100002_35_060");
MsgDisp("Guy","I wouldn't do anything reckless to our
precious talent.");
MsgDispSksp(1,5);
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B110100002_01_020");
MsgDisp("Kazama","I'm sorry.
If only I wasn't late...");
MsgDispSksp(0);
MsgDisp("主人公","No, it's alright.
Thank you very much.");
ChEye(35,1);
ChMouth(35,2);
VoicePlay("B110100002_35_070");
MsgDisp("Guy","Wait, can you see me?
Hear me?");
MsgDispSksp(1,5);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("B110100002_01_030");
MsgDisp("Kazama","You're still here huh.");
MsgDispSksp(0);
ChEye(35,1);
ChMouth(35,1);
ChEyeOpenLevel(35,0);
VoicePlay("B110100002_35_080");
MsgDisp("Guy","Being ignored is the hardest thing at this
age.");
MsgDispSksp(1,5);
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("B110100002_01_040");
MsgDisp("Kazama","Seriously, just disappear already.");
MsgDispSksp(0);
ChEye(35,1);
ChMouth(35,1);
VoicePlay("B110100002_35_090");
MsgDisp("Guy","Ah, yes, please excuse me.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(35);
ChMouth(1,2);
ChPosition(1,0);
Wait(60,0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("B110100002_01_050");
MsgDisp("Kazama","There are still people like that around.");
MsgDisp("主人公","Yeah, I feel a little sorry for him.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B110100002_01_060");
MsgDisp("Kazama","Hey, you're too nice.
Let's go.");
BGMStop();
