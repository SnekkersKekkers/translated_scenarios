BGOpen("ar300",0);
ChLayout(1);
SEPlay("EV_SE_589");
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_C08_DAICHI_A",0.01);
ChOpen(8,35,2,3,3,#1,#1,0,0);
ChEyeOpenLevel(8,0);
VoicePlay("D020800300_08_000");
MsgDisp("Shirahane","Cheers......
No, thank you very much!");
SEStop("EV_SE_589",1);
MsgDisp("主人公","Thank you very much!
...... Hehe!");
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,4,1);
ChCheek(8,3);
VoicePlay("D020800300_08_010");
MsgDisp("Shirahane","My bad.
It slipped out.");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("D020800300_08_020");
MsgDisp("Shirahane","You know, yesterday I got into a fight
with my sister.
The three of us got into a big mess.");
MsgDisp("主人公","Eh?
｛大地＊＊｝, you live with
your siblings?");
ChCheek(8,0);
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("D020800300_08_030");
MsgDisp("Shirahane","Bet.
Me and my bro live together in sis'
apartment.");
MsgDisp("主人公","You have a brother too!
I didn't know that......");
MsgDisp("主人公","(Now that I think about it, isn't there
also someone named \"Shirahane\" working at
Habatcher?)");
ChMotion(8,0,1);
VoicePlay("D020800300_08_040");
MsgDisp("Shirahane","Bro and Sis usually speak normal Japanese,
but when they're home they also speak like
this.");
MsgDisp("主人公","Oh......");
ChEye(8,3);
ChMouth(8,4);
ChMotion(8,4,1);
ChEyeOpenLevel(8,10);
VoicePlay("D020800300_08_050");
MsgDisp("Shirahane","......Maybe I should also use normal
Japanese.");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
ChEyeOpenLevel(8,0);
VoiceEVSPlay(8);
VoicePlay("D020800300_08_060");
MsgDisp("Shirahane","｛主人公｝ is smiling
brightly today too!
I won't lose to you!");
ChEyeOpenLevel(8,#1);
MsgDisp("主人公","Haha! It seems you won't! ......I mean,
your smile is way brighter than mine.");
ChEye(8,3);
ChMouth(8,4);
ChMotion(8,2,1);
ChEyeOpenLevel(8,0);
ChCheek(8,5);
VoicePlay("D020800300_08_070");
MsgDisp("Shirahane","Hehe......
Really?");
MsgDisp("主人公","(Hehe!
I bet ｛大地＊＊｝'s siblings
also shine brightly.)");
BGMStop();
MsgClose();
ScrFadeOut(0);
