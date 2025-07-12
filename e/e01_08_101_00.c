BGOpen("ne100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Well then......
I think it's time to go home.)");
MsgClose();
BGMPlay("BGM_C08_DAICHI_A",0.01);
ChOpen(8,255,0,0,4,#1,#1,0,0);
VoicePlay("E010810100_08_000");
MsgDisp("Shirahane","Hm?");
MsgDisp("主人公","Ah, ｛大地＊＊｝!
Hello.");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
ChEyeOpenLevel(8,0);
VoicePlay("E010810100_08_010");
MsgDisp("Shirahane","Yeah, hello-");
ChEye(8,0);
ChMouth(8,5);
MsgDisp("主人公","......Somehow ｛大地＊＊｝ is giving
off a sweet smell......");
ChEye(8,0);
ChMouth(8,3);
ChMotion(8,0,1);
VoicePlay("E010810100_08_020");
MsgDisp("Shirahane","Ah that's right! I came from an all you
can eat dessert buffet.");
ChEye(8,2);
ChMouth(8,5);
ChMotion(8,2,1);
ChCheek(8,5);
VoicePlay("E010810100_08_030");
MsgDisp("Shirahane","Ah ∋
Don't get the wrong idea!
It's not like I was on a date.");
MsgDisp("主人公","Hehe!");
ChCheek(8,0);
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0,1);
VoicePlay("E010810100_08_040");
MsgDisp("Shirahane","The other day, I helped the basketball
club with their practice match. We all
went together to celebrate their victory.");
MsgDisp("主人公","Ah that's right
Congratulations!");
ChEye(8,3);
ChMotion(8,3,1);
VoicePlay("E010810100_08_050");
MsgDisp("Shirahane","Hehe.
By the way, do you also want to celebrate?");
ChEyeOpenLevel(8,#1);
MsgDisp("主人公","Eh?");
ChEye(8,0);
ChMouth(8,3);
ChMotion(8,0,1);
VoicePlay("E010810100_08_060");
MsgDisp("Shirahane","I also played in a game as a sub and won.
I'm on my way to the team's victory
celebration now.");
MsgDisp("主人公","Really? ∋
That's amazing......");
ChEye(8,1);
ChMouth(8,3);
VoicePlay("E010810100_08_070");
MsgDisp("Shirahane","Next time I'll be helping the soccer club,
I'll be sure to win that one too.");
MsgDisp("主人公","Huh?
I think that goes way beyond the duties
of being a helper......");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("E010810100_08_080");
MsgDisp("Shirahane","It's alright.
I enjoy sports, so I'm happy to 
contribute to Haba High's victory.");
ChMotion(8,1,1);
VoicePlay("E010810100_08_090");
MsgDisp("Shirahane","I'll be going to the basketball club's
celebration now. Next up is sukiyaki ▼");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(8,0,30);
MsgDisp("主人公","(Wow ｛大地＊＊｝ is a really
good athlete......)");
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(8,#1);
ChMouthOpenLevel(8,#1);
ChCheek(8,0);
