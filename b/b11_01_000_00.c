BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Huh...
｛風真＊＊｝ isn't here yet.");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","｛風真＊＊｝, 
I wonder if something happened...");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(33,254,0,0,0,#1,#1,0,0);
VoicePlay("B110100000_33_000");
MsgDisp("Guy","Hey, do you want to know? 
Or do you not want to?");
MsgDisp("主人公","Ehh∋
...Me?");
ChEye(33,0);
ChMouth(33,0);
ChEyeOpenLevel(33,8);
VoicePlay("B110100000_33_010");
MsgDisp("Guy","Yeah, you're probably
curious now. Okay?
Your door has just opened.");
MsgDisp("主人公","???
W-What are you talking about?");
ChPosition(33,2);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
BGMPlay("BGM_C01_RYOUTA_A",0.01);
MsgClose();
ChOpen(1,253,0,0,2,8,#1,0,1,0,30);
VoicePlay("B110100000_01_000");
MsgDisp("Kazama","Oi.
What are you doing?");
ChEye(33,1);
ChMouth(33,0);
VoicePlay("B110100000_33_020");
MsgDisp("Guy","Not yet.
Once I'm finished with this girl.");
MsgDispSksp(1,5);
ChEye(1,1);
ChMouth(1,1);
ChMotion(1,3);
VoicePlay("B110100000_01_010");
MsgDisp("Kazama","Don't shit around.
Don't get any closer to her!");
MsgDispSksp(0);
ChEye(33,2);
ChMouth(33,2);
VoicePlay("B110100000_33_030");
MsgDisp("Guy","Gyaah!
This girl's door won't close anymore!");
MsgDispSksp(1,5);
ChEye(1,1);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("B110100000_01_020");
MsgDisp("Kazama","Damn it...
Did you do something to her?");
MsgDispSksp(0);
ChEye(33,2);
ChMouth(33,1);
VoicePlay("B110100000_33_040");
MsgDisp("Guy","I-I haven't.
...yet.");
MsgDispSksp(1,5);
ChEye(1,1);
ChMouth(1,1);
ChMotion(1,3);
VoicePlay("B110100000_01_030");
MsgDisp("Kazama","Hah?
Stop shitting around!");
MsgDispSksp(0);
ChEye(33,1);
ChMouth(33,1);
VoicePlay("B110100000_33_050");
MsgDisp("Guy","I-I won't shit around anymore!");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(33);
ChEye(1,1);
ChMouth(1,2);
ChPosition(1,0);
Wait(60,0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("B110100000_01_040");
MsgDisp("Kazama","What the hell was up with that guy...
hey, are you alright?");
MsgDisp("主人公","Y-Yeah.
Thank you for helping me.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("B110100000_01_050");
MsgDisp("Kazama","Sorry, it was because I was late 
that a weirdo approached you.");
MsgDisp("主人公","It's alright now.
Shall we go?");
