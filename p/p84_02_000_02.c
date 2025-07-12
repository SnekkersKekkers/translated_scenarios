ScrFadeIn(0);
VoicePlay("P840200002_48_000");
MsgDisp("School Girl","It's almost time to start cleaning
up, so please give us more trash bags.");
MsgDisp("主人公","Sure!");
MsgClose();
SEPlay("EV_SE_DOOR_019");
SEWait();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(2,254,0,0,0,#1,#1,0,0);
VoicePlay("P840200002_02_000");
MsgDisp("Sassa","Excuse me, could you provide
some trash bags for my class too?");
MsgDisp("主人公","Of course!");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("P840200002_02_010");
MsgDisp("Sassa","You're hard at work as usual.");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("P840200002_02_020");
MsgDisp("Sassa","Thanks to you and the student council,
the festival was really fun.");
MsgDisp("主人公","It makes me happy to hear that.
Are you enjoying yourself, ｛颯砂＊＊｝?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("P840200002_02_030");
MsgDisp("Sassa","Not yet. I haven't given up on the idea of
wandering around the stalls with you when
you're done.");
MsgDisp("主人公","Hehe! Sure!");
MsgDisp("主人公","(｛颯砂＊＊｝ thanked me!
I'm so happy!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
