ScrFadeIn(0);
VoicePlay("P840300003_48_000");
MsgDisp("School Girl","I'm sorry for asking again and again.
Has the twine been returned?");
MsgDisp("主人公","I'm very sorry...
It seems like it still 
hasn't been returned.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(3,254,0,4,4,-1,-1,0,0);
VoicePlay("P840300003_03_000");
MsgDisp("Honda","…………");
MsgDisp("主人公","Phew, good grief.
Which is the class that borrows
things without ever  returning it?");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("P840300003_03_010");
MsgDisp("Honda","Maybe, 
It never existed from the first placeー?");
MsgDisp("主人公","Eh?　｛本多＊＊｝.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("P840300003_03_020");
MsgDisp("Honda","After all, the list of the equipment shelf
doesn't mention any packing tape?");
MsgDisp("主人公","Ah, that's right...");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("P840300003_03_030");
MsgDisp("Honda","Maybe it would be better 
if you took a little break?");
MsgDisp("主人公","(Haa, it wasn't there in the first place.
I'm sorry, I failed tremendously.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
