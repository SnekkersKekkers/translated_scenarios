MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Yayー!
It was a huge success∈)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(1,254,0,0,3,-1,-1,0,0);
ChEye(1,3);
ChMotion(1,3);
VoiceEVSPlay(1);
VoicePlay("P740100004_01_000");
MsgDisp("Kazama","｛主人公｝,
Congratulations!");
MsgDisp("主人公","Ah, ｛風真＊＊｝.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("P740100004_01_010");
MsgDisp("Kazama","To be honest, 
I didn't want to congratulate you
on looking the way you did today.");
MsgDisp("主人公","Eh?");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,3);
VoicePlay("P740100004_01_020");
MsgDisp("Kazama","Why is that?
When you receive those congratulations, 
I will too, at the same time.");
MsgDisp("主人公","Umm...");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,3);
ChCheek(1,5);
VoicePlay("P740100004_01_030");
MsgDisp("Kazama","Ah, my bad.
The fashion show was really good,
so I got really excited.");
MsgDisp("主人公","(Yay, I'm truly glad I devoted these 
last three years to the handicrafts club!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
