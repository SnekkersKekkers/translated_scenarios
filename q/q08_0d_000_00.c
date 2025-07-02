BGMStop();
BGOpen("sc810",0);
ChLayout(1);
MsgClose();
ChOpen(21,254,0,0,0,-1,-1,0,1,0,30);
ChOpen(22,254,0,0,3,-1,-1,0,2,0,30);
ScrFadeIn(0);
MsgDisp("主人公","Haah...... I had so much fun.");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("Q080D00000_21_000");
MsgDisp("Michiru","Going around with your bestest friends
is the best.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("Q080D00000_22_000");
MsgDisp("Hikaru","Let's go the next free time together 
too♪
Right?");
MsgDisp("主人公","Yeah, sure!");
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
ChClose(22,0,0);
