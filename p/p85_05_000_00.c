BGOpen("sc710",0);
ChLayout(1);
MsgClose();
ChOpen(5,254,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛Hiiragi＊＊＊｝, good work.");
VoicePlay("P850500000_05_000");
MsgDisp("Hiiragi","Yes, you too.");
ChEye(5,4);
ChMotion(5,4);
VoicePlay("P850500000_05_010");
MsgDisp("Hiiragi","I was delighted to see so many students
enjoying themselves.");
MsgDisp("主人公","Yeah.
We managed to help out in some way, didn't we?");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("P850500000_05_020");
MsgDisp("Hiiragi","Yes, I think so.
Above all, your smile right now is proof
of that.");
MsgDisp("主人公","(Yay, a huge success!
It was worth giving it my best.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
