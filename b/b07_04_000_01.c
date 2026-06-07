MsgDisp("主人公","What sort of TV do you watch?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,2,1);
VoicePlay("B070400000_04_010");
MsgDisp("Nanatsumori","TV huh...not a lot.
Mostly watch stuff on the internet.");
MsgDisp("主人公","I see.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("B070400000_04_020");
MsgDisp("Nanatsumori","I'm signed up to a few video sites, so I'm
never short of stuff to watch.");
MsgDisp("主人公","What do you watch on there?");
ChEye(4,0);
ChMouth(4,4);
VoicePlay("B070400000_04_030");
MsgDisp("Nanatsumori","Original shows.
Music and shopping channels too.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,3,1);
VoicePlay("B070400000_04_040");
MsgDisp("Nanatsumori","Ah and catch up TV.
Since it's convenient.");
MsgDisp("主人公","(I feel like he's a TV fan...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
