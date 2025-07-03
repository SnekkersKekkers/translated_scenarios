BGMStop();
BGOpen("sc810",0);
ChOpen(1,254,0,0,3,-1,-1,0,1,0,30);
ChOpen(2,254,3,0,4,-1,-1,0,2,0,30);
ScrFadeIn(0);
MsgDisp("主人公","It was so much fun!
Thanks to you both.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("Q080A00100_02_000");
MsgDisp("Sassa","I had fun too!");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("Q080A00100_01_000");
MsgDisp("Kazama","Me too. But you know, the school trip
isn't over yet.");
MsgDisp("主人公","Yeah, That's true.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("Q080A00100_01_010");
MsgDisp("Kazama","So, it's settled that we're going to
spend the next free time also together.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("Q080A00100_02_010");
MsgDisp("Sassa","Let's do that.
I'm sure someone from the city of 
Habataki will interrupt us too?");
MsgDisp("主人公","Hehe, I'm sure too.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("Q080A00100_01_020");
MsgDisp("Kazama","Then let's go around the day after 
tomorrow with the four of us, shall we?");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,4,1);
ChEyeOpenLevel(2,0);
VoicePlay("Q080A00100_02_020");
MsgDisp("Sassa","Yeah, right.");
MsgDisp("主人公","Yeah! Deal.");
ChEye(1,0);
MsgDisp("主人公","(The next free time is going to be fun!
I can't wait!)");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(1,0,0);
ChClose(2,0,0);
