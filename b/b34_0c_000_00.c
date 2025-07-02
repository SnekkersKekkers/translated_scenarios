BGMStop();
BGDateAfterOpen();
ChLayout(2);
ChCheek(5,0);
ChCheek(6,0);
ChCheek(7,0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,7);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ScrFadeIn(0);
MsgDisp("主人公","Haa, that was fun!
Thanks for inviting me.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B340C00000_05_000");
MsgDisp("Hiiragi","Yes it is enjoyable when you 
go out together with your friends 
together like this.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B340C00000_06_000");
MsgDisp("Himuro","That's right.
But.. friends?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B340C00000_07_000");
MsgDisp("Mikage","We're an interesting group
of friends huh?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("B340C00000_05_010");
MsgDisp("Hiiragi","Yes.
Then, I'll see you all at school.");
MsgClose();
SEPlay("EV_SE_856",0,0.6);
