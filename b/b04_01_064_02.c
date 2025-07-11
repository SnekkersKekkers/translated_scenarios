BGOpen("wf700",2);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040106402_01_000");
MsgDisp("Kazama","Candied apples, yakisoba, takoyaki,
chocolate bananas... Which will you start
with?");
MsgDisp("主人公","Hey, that's nothing but food.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B040106402_01_010");
MsgDisp("Kazama","I already know exactly what you're
thinking. I can see right through you.");
MsgDisp("主人公","Jeez, well, I can always
guess what you're thinking of?");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B040106402_01_020");
MsgDisp("Kazama","Hooh, then guess away.");
MsgDisp("主人公","Fine.
Umm...");
SEPlay("EV_SE_022");
Wait(20,0);
SEPlay("EV_SE_551",0,0.9);
ChEye(1,5);
ChMouth(1,2);
ChMotion(1,5);
SEPlay("EV_SE_512",0,0.7);
ScrQuake(1);
MsgClose();
ScrFadeOut(0,0,30);
MsgDisp("主人公","Wah!");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,3);
ChCheek(1,5);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
ChLayout(0);
VoicePlay("B040106402_01_030");
MsgDisp("Kazama","... Hey, you're alright.
Look up, it's just the warning firework.");
ScrFadeIn(0);
MsgDisp("主人公","Phew, that startled me.");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,2);
ChEyeOpenLevel(1,8);
VoicePlay("B040106402_01_040");
MsgDisp("Kazama","Yeah.
This year's was a little too big.");
MsgDisp("主人公","Hehe, you're right.");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,4);
ChMouth(1,4);
ChMotion(1,4);
VoicePlay("B040106402_01_050");
MsgDisp("Kazama","And by the way... You got it right.");
MsgDisp("主人公","?");
ChMouth(1,2);
ChCheek(1,10);
VoicePlay("B040106402_01_060");
MsgDisp("Kazama","About... What I was thinking of.");
MsgDisp("主人公","Huh? What was it?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
ChCheek(1,0);
VoicePlay("B040106402_01_070");
MsgDisp("Kazama","And it's gone...
Well, that's just like I expected too.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
Wait(30,1);
VoicePlay("B040106402_01_080");
MsgDisp("Kazama","Anyway, don't worry about it.
Let's start making our way over.");
MsgDisp("主人公","Huh? Um, okay.");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(1,0,0);
