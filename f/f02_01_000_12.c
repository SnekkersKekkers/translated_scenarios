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
MsgDisp("Kazama","That's right...it's time for a new year.
All that time really passed in a blink.");
MsgDisp("主人公","Yeah, a lot happened.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("F020100012_01_010");
MsgDisp("Kazama","Thanks to you, I was never bored.");
MsgDisp("主人公","Thanks to you, ｛Kazama＊＊｝.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("F020100012_01_020");
MsgDisp("Kazama","Why would you say that?
I wouldn't have minded a slightly calmer
year, though.");
MsgDisp("主人公","Yeah, that sounds nice.
Maybe I'll make \"calmness\" my theme
for next year...");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,#1);
VoicePlay("F020100012_01_030");
MsgDisp("Kazama","You make it sound so easy.");
MsgDisp("主人公","(Well, I guess first off...
I can start with fashion...?)");
