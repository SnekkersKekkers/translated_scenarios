BGOpen("ex280",1);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGMPlay("BGM_C01_RYOUTA_D",0.01);
Wait(60,0);
VoiceEVSPlay(1);
VoicePlay("B070101000_01_000");
MsgDisp("Kazama","｛主人公｝.
You asked me what I thought about love
right?");
MsgDisp("主人公","Eh...
Ah, yeah.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("B070101000_01_010");
MsgDisp("Kazama","Don't tell me you forgot?");
MsgDisp("主人公","I remember.");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,#1);
VoicePlay("B070101000_01_020");
MsgDisp("Kazama","Then, did you think about it?
You said you'd think about it properly.");
MsgDisp("主人公","Umm...
I haven't really thought about it.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("B070101000_01_030");
MsgDisp("Kazama","Haa...well that's how it is.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("B070101000_01_040");
MsgDisp("Kazama","Ever since then, I've been thinking about
it. It might have been unconscious for
you, but I thought about the meaning of
you asking me that kind of question.");
MsgDisp("主人公","｛風真＊＊｝...");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("B070101000_01_050");
MsgDisp("Kazama","I decide a lot of different things based
on only my own circumstance, so the time
and place where I'll tell you my feelings
have already been decided.");
MsgDisp("主人公","Eehh∋");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("B070101000_01_060");
MsgDisp("Kazama","But, but if that time for you is now
then──");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("B070101000_01_070");
MsgDisp("Kazama","...How about it?");
MsgDisp("主人公","Ummm... before, I just wanted to ask a
little on ｛風真＊＊｝'s views on
love. I didn't really think about it too
carefully.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,9);
VoicePlay("B070101000_01_080");
MsgDisp("Kazama","...I see.");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("B070101000_01_090");
MsgDisp("Kazama","Stop asking weird stuff on a whim.
There are times when being simple-minded
is inexcusable.");
MsgDisp("主人公","...I'm sorry okay?");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B070101000_01_100");
MsgDisp("Kazama","Haa—, fine.
Maybe I'm observing you too much.");
MsgDisp("主人公","But, it could also be as
｛風真＊＊｝ thinks——");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
VoicePlay("B070101000_01_110");
MsgDisp("Kazama","Stop it, if you say anything more off──");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B070101000_01_120");
MsgDisp("Kazama","... I'm more serious about you than
anything or anyone.
Just don't forget that.");
MsgDisp("主人公","｛風真＊＊｝...");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ho000",2);
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for walking me home.");
ChEyeOpenLevel(1,#1);
VoicePlay("B070101000_01_130");
MsgDisp("Kazama","Yeah.");
MsgDisp("主人公","｛風真＊＊｝, I'll think about
you properly.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("B070101000_01_140");
MsgDisp("Kazama","... I see, sorry.
That's all I can handle today.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B070101000_01_150");
MsgDisp("Kazama","I'll go cool down, see you later.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","(｛風真＊＊｝...)");
MsgClose();
ScrFadeOut(0,0);
