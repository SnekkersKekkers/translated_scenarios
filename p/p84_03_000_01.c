ChOpen(3,254,4,0,4,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("P840300001_03_000");
MsgDisp("Honda","Hmm...as I thought, can I help you
somehow?");
MsgDisp("主人公","Eh.");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("P840300001_03_010");
MsgDisp("Honda","I can't bare to see you like this.
Your brow is furrowed, it's proof that
you're overdoing it.");
MsgDisp("主人公","Uugh...");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
VoicePlay("P840300001_03_020");
MsgDisp("Honda","The student council is the face of Haba
High. If you make a face like that, people
will be scared.");
MsgDisp("主人公","That's right...");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("P840300001_03_030");
MsgDisp("Honda","Well, if I help too, we can finish quicker
and head to the food stalls!
I'm famished.");
MsgDisp("主人公","(I didn't even realize I was making such a
scary face...a huge fail.
It's important to get help.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
