ScrFadeIn(0);
VoicePlay("P840400005_48_000");
MsgDisp("School Girl","No, I have to hurry, 
The good seats will be taken～!");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
SEWait();
MsgDisp("主人公","You can't run in the hallways...
That person dropped their handkerchief∋");
MsgDisp("主人公","Wait a moment!
You dropped your handkerchiefー!");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE",0.01);
SEWait();
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,2,2,#1,#1,0,0,0,60);
VoicePlay("P840400005_04_000");
MsgDisp("Nanatsumori","Hey hey.
You can't run in the hallways.");
MsgDisp("主人公","Ah, it's useless,
I just...");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("P840400005_04_010");
MsgDisp("Nanatsumori","It's the student council's job
to look after lost items right?
Don't panic, keep calm.");
MsgDisp("主人公","Yes.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("P840400005_04_020");
MsgDisp("Nanatsumori","Well, being diligent can backfire.
Don't be discouraged.");
MsgDisp("主人公","(Even though I was supposed to be a role
model. Haa... my last cultural festival
was a fail.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
