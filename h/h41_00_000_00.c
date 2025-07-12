BGOpen("sc101",0);
ScrFadeIn(0);
MsgDisp("主人公","Alright, let's join the
rhythmic gymnastics club!");
MsgClose();
ScrFadeOut(0);
BGOpen("sc603",0);
ScrFadeIn(0);
VoicePlay("H410000000_45_000");
MsgDisp("Manager","On the third Sunday of every month,
we have a general practice, so please
be sure to show up.");
MsgDisp("主人公","Yes!
I'm looking forward to it!");
MsgClose();
BGMPlay("BGM_C22_HIKARU_A",0.01);
Wait(15,0);
ChOpen(22,30,0,0,0,#1,#1,0,0);
VoicePlay("F012200007_22_000");
MsgDisp("Hikaru","Ah, it's Mari.");
MsgDisp("主人公","Ah, ｛ひかる＊｝.
I joined the rhythmic gymnastics club,
too. Looking forward to it!");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3);
VoicePlay("H410000000_22_010");
MsgDisp("Hikaru","Of course♪
Let's work hard together, Mari!");
MsgDisp("主人公","(Yeah, let's do our best!)");
BGMStop();
MsgClose();
ScrFadeOut(0);
