BGOpen("ho000",2);
ChLayout(1);
MsgClose();
ChOpen(3,255,4,4,4,#1,#1,8,0);
ScrFadeIn(0);
VoicePlay("B150310000_03_000");
MsgDisp("Honda","Hah... your curiosity is really something.");
MsgDisp("主人公","Ah...
I got carried away.
Sorry?");
ChEye(3,1);
ChMouth(3,3);
ChMotion(3,1,1);
ChCheek(3,0);
VoicePlay("B150310000_03_010");
MsgDisp("Honda","It's fine, but you know, I'm pretty
curious too. Even I don't know what might
happen to you.");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
