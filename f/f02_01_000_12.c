BGMStop();
BGOpen("sc010",1);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ScrFadeIn(0);
MsgDisp("主人公","It's almost spring break.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("F020100012_01_000");
MsgDisp("Kazama","That's right... it's time for a new year.
All that time really passed in a blink.");
MsgDisp("主人公","Yeah, a lot happened.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("F020100012_01_010");
MsgDisp("Kazama","Thanks to you, I was never bored.");
MsgDisp("主人公","Thanks to me?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("F020100012_01_020");
MsgDisp("Kazama","Of course.
I had a very calm year, so there's no
question about it.");
MsgDisp("主人公","I see, that's good.
When the new year starts, I hope it stays
calm...");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,#1);
VoicePlay("F020100012_01_030");
MsgDisp("Kazama","You make it sound so easy.");
MsgDisp("主人公","(Well, I guess first off...
I can start with fashion...?)");
