BGOpen("sc823",0);
ChLayout(2);
ScrFadeIn(0);
MsgDisp("主人公","Wow, so cute.
The building and the flowers and
cobblestones are all so pretty!");
MsgClose();
ChOpen(1,254,0,0,3,10,#1,0,0,0,30);
ChOpen(3,254,0,0,0,#1,#1,0,1,0,30);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,2,0,30);
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("Q070B00200_01_000");
MsgDisp("Kazama","Yeah.
It reminds me of the UK.");
MsgDisp("主人公","Huh, so there're many pretty buildings
like these?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
VoicePlay("Q070B00200_01_010");
MsgDisp("Kazama","Yeah, there lays easily one or two
buildings of a century old——");
ChEye(1,0);
ChMouth(1,2);
ChEyeOpenLevel(1,8);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("Q070B00200_03_000");
MsgDisp("Honda","Yepyep! This one here is the oldest wooden
european building in Japan. It's so well
kept!");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("Q070B00200_01_020");
MsgDisp("Kazama","...Yeah, that.
And also——");
ChEye(1,2);
ChMouth(1,2);
ChMotion(4,1,1);
VoicePlay("Q070B00200_04_000");
MsgDisp("Nanatsumori","Glover's wife was Japanese. ...is what the
pamphlet says.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("Q070B00200_01_030");
MsgDisp("Kazama","...That's it.
Did you get it?");
MsgDisp("主人公","Hehe!
Thanks.");
ChEye(1,2);
ChMouth(1,0);
ChMouth(4,3);
ChMotion(4,0,1);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("Q070B00200_03_010");
MsgDisp("Honda","Heyheyhey, everyone!
Let's take one last picture, with all of
us!");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("Q070B00200_01_040");
MsgDisp("Kazama","Come on, let's go.");
MsgDisp("主人公","Yeah!");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChClose(3,0,0);
ChClose(1,0,0);
ChClose(4,0,0);
