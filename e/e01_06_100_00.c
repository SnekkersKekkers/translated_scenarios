BGOpen("ne000",1);
ChLayout(1);
ScrFadeIn(0);
VoiceEVSPlay(6);
VoicePlay("E010610000_06_000");
MsgDisp("Himuro?","｛主人公｝.");
MsgClose();
BGMPlay("BGM_C06_INORI_A",0.01);
ChOpen(6,255,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Ah, ｛氷室＊＊｝!
Are you out shopping?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010610000_06_010");
MsgDisp("Himuro","Mmm, something like that.
I got hungry, so I went to the
convenience store.");
MsgDisp("主人公","I see.
What did you buy?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010610000_06_020");
MsgDisp("Himuro","Instant ramen and fried chicken.
Oh, and a carbonated drink.");
MsgDisp("主人公","Ah.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("E010610000_06_030");
MsgDisp("Himuro","I'll tell you now,
the nutritional balance for all my meals
is calculated ahead of time.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010610000_06_040");
MsgDisp("Himuro","I'm only this way for snacks.
When I maintain my diet, I feel
like eating like this as a response.");
MsgDisp("主人公","Ah, I see.
But it seems like a lot for a snack.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010610000_06_050");
MsgDisp("Himuro","I'm still growing, so
it's okay if I eat this much.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("E010610000_06_060");
MsgDisp("Himuro","Besides...... I can only eat
these kinds of things as a snack.");
MsgDisp("主人公","Are you usually not
allowed to?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010610000_06_070");
MsgDisp("Himuro","She wouldn't be happy
if I did.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("E010610000_06_080");
MsgDisp("Himuro","But no matter how many times
I'm warned, I can't help but have instant
ramen and soda after surfing.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("E010610000_06_090");
MsgDisp("Himuro","You wouldn't like being
served New Year's food after surfing,
would you?");
MsgDisp("主人公","Traditional food......
Yeah, you have a point.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("E010610000_06_100");
MsgDisp("Himuro","That's right.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("E010610000_06_110");
MsgDisp("Himuro","Well, I'm going home now.
I have to eat quickly before my
mom arrives.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
MsgClose();
ChClose(6);
MsgDisp("主人公","(Traditional cuisine......
I'm a bit curious about the food
｛氷室＊＊｝'s mother makes.)");
MsgClose();
ScrFadeOut(0,0);
