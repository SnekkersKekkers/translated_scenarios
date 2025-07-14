BGOpen("ho000",2);
ChLayout(1);
MsgClose();
ChOpen(2,255,4,0,0,#1,#1,10,0);
ScrFadeIn(0);
VoicePlay("B150200000_02_000");
MsgDisp("Sassa","What, what's up with you?");
MsgDisp("主人公","Eh?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,5);
VoicePlay("B150200000_02_010");
MsgDisp("Sassa","There's no way that you don't remember?
Even though you kept touching me∋");
MsgDisp("主人公","Yeah... I'm sorry.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
ChCheek(2,0);
VoicePlay("B150200000_02_020");
MsgDisp("Sassa","Ah, you're apologizing.
Then don't do it in the first place.
I thought it was some sort of prank.");
MsgDisp("主人公","Prank?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("B150200000_02_030");
MsgDisp("Sassa","I seriously don't get it.
Are you messing around, or are you
serious?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,7);
VoicePlay("B150200000_02_040");
MsgDisp("Sassa","Well, judging by how it felt just now, you
were just messing.
Then, it's fine.");
MsgDisp("主人公","...You're not mad?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("B150200000_02_050");
MsgDisp("Sassa","I'm not mad.
But if you're going to joke around, please
make it a little clearer.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
ChEyeOpenLevel(2,7);
VoicePlay("B150200000_02_060");
MsgDisp("Sassa","I was looking at your face and you were
super serious?");
MsgDisp("主人公","Eh! Did I look like that?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B150200000_02_070");
MsgDisp("Sassa","You did. But, I know there was no meaning
to it, so it's fine now. I'm going home.
See ya then.");
MsgDisp("主人公","Yeah... see you then?");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2);
MsgClose();
ScrFadeOut(0,0);
