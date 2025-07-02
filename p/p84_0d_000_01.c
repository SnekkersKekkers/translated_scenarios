ScrFadeIn(0);
BGMStop();
MsgDisp("主人公","Phew...
Do you think it's tidy enough?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
ChOpen(21,254,0,0,4,-1,-1,0,1);
ChOpen(22,254,0,2,0,-1,-1,0,2);
VoicePlay("P840D00001_21_000");
MsgDisp("Michiru","...Is it reallY?");
ChEye(22,2);
ChMouth(22,0);
ChMotion(22,2,1);
VoicePlay("P840D00001_22_000");
MsgDisp("Hikaru","That looks like it's
just been crammed in....");
VoicePlay("P840D00001_48_000");
MsgDisp("School Girl","Huh? Have you seen the documents that were
here?");
MsgDisp("主人公","Ah, I just tidied it up!");
VoicePlay("P840D00001_48_010");
MsgDisp("School Girl","Ehh, I needed it right away though∋
Where is it?");
MsgDisp("主人公","Ummm...
Where is it I wonder....");
ChEye(22,2);
ChMouth(22,0);
ChMotion(22,1,1);
ChEyeOpenLevel(22,10);
VoicePlay("P840D00001_22_010");
MsgDisp("Hikaru","Do you think it's been tightly
shoved into that cardboard box?");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("P840D00001_21_010");
MsgDisp("Michiru","Haa... you can't do this alone.
We'll help.");
MsgDisp("主人公","(UUugh...Maybe I was too careless.
A huge fail...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
ChClose(22,0,0);
