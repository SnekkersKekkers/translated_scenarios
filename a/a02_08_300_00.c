BGOpen("ar300",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","I'm ｛主人公苗字｝ and I'll be working here
starting today.
Nice to meet you.");
VoicePlay("A020830000_40_000");
MsgDisp("Manager","Your shifts are Wednesdays and Fridays every
week, okay?
I'm counting on you.");
MsgDisp("主人公","Yes, understood.");
MsgDisp("主人公","(Alright, let's do our best!)");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
SEPlay("EV_SE_589");
MsgDisp("主人公","Thank you and come again!");
SEStop("EV_SE_589",1);
SEPlay("EV_SE_519");
MsgDisp("主人公","Ah...
Welcome!
Bring your car right this way, please.");
MsgDisp("主人公","(There are so many customers coming to the
gas station, it's so busy...!)");
MsgDisp("主人公","Fill the tank with regular, yes?
Coming right up.");
SEStop("EV_SE_519",2);
MsgClose();
BGMPlay("BGM_C08_DAICHI_I",0.01);
ChOpen(8,35,0,3,3,0,#1,0,0);
ChMotion(8,1,1);
VoicePlay("A020830000_08_000");
MsgDisp("Shirahane?","Then, allow me to clean it up for you～
Would you like the windows done too?");
MsgDisp("主人公","...Eh?");
ChEyeOpenLevel(8,#1);
VoicePlay("A020830000_08_010");
MsgDisp("Shirahane?","I just finished up, so I'll pitch in here.");
MsgDisp("主人公","Ah, thanks.
Uhm...");
ChMouth(8,3);
ChMotion(8,0,1);
VoicePlay("A020830000_08_020");
MsgDisp("Shirahane","You're the new part-timer startin' today,
right? I'm Shirahane Daichi. I'm in the blue
necktie year at Hanegasaki Academy.");
ChEyeOpenLevel(8,#1);
MsgDisp("主人公","I'm ｛主人公姓名｝.
Blue... So that means, the same grade as me,
doesn't it! I'm from——");
ChEye(8,4);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("A020830000_08_030");
MsgDisp("Shirahane","The famous Habataki High, innit?
That's wicked cool.");
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("A020830000_08_040");
MsgDisp("Shirahane","Ah...
Not good.
Gotta keep it moving!");
MsgDisp("主人公","Ah, that's right!");
MsgClose();
ScrFadeOut(0);
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0,1);
ChEyeOpenLevel(8,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_589");
BGMVol(0.5,2);
ScrFadeIn(0);
MsgDisp("主人公","Thank you very much!
｛Daichi＊＊｝, thank you for helping me.");
SEStop("EV_SE_589",1);
ChEye(8,3);
ChMotion(8,0,1);
VoicePlay("A020830000_08_050");
MsgDisp("Shirahane","Don't mention it.
But hey, what's a girl from a fancy school
like yours doin' workin' at a gas station?");
MsgDisp("主人公","Eh, is it that weird?");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,2,1);
VoicePlay("A020830000_08_060");
MsgDisp("Shirahane","It's not weird per se.
Just, suppose I'd call it unexpected, or you
could say it's got me worried...");
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("A020830000_08_070");
MsgDisp("Shirahane","Pushin' yourself too hard's a no-go.
Any trouble, just say the word, yeah?");
MsgDisp("主人公","Mm, thanks!");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,1,1);
ChEyeOpenLevel(8,0);
VoicePlay("A020830000_08_080");
MsgDisp("Shirahane","Then, once more: lookin' forward to workin'
with you～!");
MsgDisp("主人公","(｛Daichi＊＊｝ from Hanegasaki Academy...
His smile and unique way of talking are kinda
cute. I can't wait for work!)");
BGMStop()MsgClose();
ScrFadeOut(0);
ChClose(8);
