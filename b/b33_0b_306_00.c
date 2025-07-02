ChClose(1,0,0);
ChClose(3,0,0);
ChClose(4,0,0);
BGOpen("ne600",0);
ScrFadeIn(0);
Wait(40,1);
ScrFadeOut(1,0,40);
BGOpen("ne628",0);
BGMPlay("BGM_CINEMA_COMEDY",0.01);
ScrFadeIn(0);
Wait(300,1);
BGMStop();
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ne600",0);
ChLayout(2);
ChNanaType(0);
ChOpen(4,253,0,0,3,-1,-1,0,3);
ChOpen(1,253,0,0,3,-1,-1,0,3);
ChOpen(3,253,0,0,0,-1,-1,0,3);
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("B330B30600_04_000");
MsgDisp("Nanatsumori","Haa... that was so funny.
I could watch this kind of 
movie over and over again.");
ChEye(1,3);
ChMotion(1,3);
VoicePlay("B330B30600_01_000");
MsgDisp("Kazama","When you watch a movie
in a big group of people, 
you can't help but laugh.");
ChEye(1,0);
ChMotion(1,0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B330B30600_03_000");
MsgDisp("Honda","That's true!
I couldn't stop laughing halfway through, 
it was painful...");
MsgDisp("主人公","Everyone was laughing, 
so I got caught up in it too.");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B330B30600_04_010");
MsgDisp("Nanatsumori","Huh?
Who was it that laughed the most?");
MsgDisp("主人公","Eh?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ChEyeOpenLevel(1,8);
VoicePlay("B330B30600_01_010");
MsgDisp("Kazama","Who was it that 
laughed so hard they cried?");
MsgDisp("主人公","Um...");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("B330B30600_03_010");
MsgDisp("Honda","Who was it that laughed so
hard they almost fell off
their chair?");
ChEyeOpenLevel(1,0);
ChMouth(3,0);
MsgDisp("主人公","Was it me?");
ChEyeOpenLevel(1,-1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,3,1);
VoicePlay("B330B30600_04_020");
MsgDisp("Nanatsumori","Right.
Thanks ti that, we had a lot more fun.
Thank you.");
MsgDisp("主人公","(Even if you thank me...
I don't think I laughed THAT much∋))");
MsgClose();
ScrFadeOut(0,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,7);
ChEyeOpenLevel(1,-1);
ChMouthOpenLevel(1,-1);
ChCheek(1,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,7);
ChEyeOpenLevel(3,-1);
ChMouthOpenLevel(3,-1);
ChCheek(3,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,7);
ChEyeOpenLevel(4,-1);
ChMouthOpenLevel(4,-1);
ChCheek(4,0);
