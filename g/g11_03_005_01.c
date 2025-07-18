BGOpen("sc130",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(The \"Skeleton Flower\" I saw in a club the
other day was so beautiful...
Maybe I can see it again in a photo book?)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgClose();
BGOpen("ar600",0);
BGMPlay("BGM_C03_HONDA_A");
ChOpen(3,35,1,0,3,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("G110300501_03_000");
MsgDisp("Honda","｛主人公｝, welcome!");
MsgDisp("主人公","Huh...you're working at your part time
job today, ｛本多＊＊｝?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("G110300501_03_010");
MsgDisp("Honda","Yeah, they asked me to help out today.
How can I help you?");
MsgDisp("主人公","The \"Skeleton Flower\" I saw the other day
was so beautiful I was interested in that
plant photo book.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("G110300501_03_020");
MsgDisp("Honda","I see I see.
That's a nice way to connect interests.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("G110300501_03_030");
MsgDisp("Honda","Hold on a second, this way.");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
MsgClose();
SEWait();
BGOpen("ev003",0);
ChOpen(3,100,1,1,1,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110300501_03_040");
MsgDisp("Honda","Look right here. The \"Color Directory of
Alpine Plants\" has info on the
\"Microscopic World of Carnivorous Plants\".");
ChEye(3,2);
ChMouth(3,2);
ChMotion(3,1);
VoicePlay("G110300501_03_050");
MsgDisp("Honda","But usually it costs around １０ rich.");
MsgDisp("主人公","Woah, that's a lot of money...");
ChEye(3,0);
ChMouth(3,1);
ChMotion(3,2);
VoicePlay("G110300501_03_060");
MsgDisp("Honda","I got it. How about next time we make our
own plant photo book? We just take
pictures with our phones.");
MsgDisp("主人公","Sure, that sounds like right right?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("G110300501_03_070");
MsgDisp("Honda","Yeah yeah, that way we don't have to buy
an expensive book.
It won't be a waste.");
MsgDisp("主人公","(If you say that out loud, wouldn't the
store manager be mad at you...?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
