BGOpen("sc501",0);
ScrFadeIn(0);
MsgDisp("主人公","(Lunch break is going to end soon.
I have to head back to the classroom...)");
BGMPlay("BGM_C03_HONDA_A",0.01);
MsgClose();
ChOpen(3,254,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Huh, ｛本多＊＊｝?
What are you doing in a place like this?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("F100310000_03_000");
MsgDisp("Honda","Yep, yep, I'm observing.");
MsgDisp("主人公","Observing?
There's no one there...");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
VoicePlay("F100310000_03_010");
MsgDisp("Honda","Look, there.
There are two umbrellas, right?
They're always there. 
And in the same place.");
MsgDisp("主人公","Those blue and pink ones?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("F100310000_03_020");
MsgDisp("Honda","That's right. At our school, if you leave
an umbrella there for a while,
it gets put away, right?");
ChEye(3,1);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("F100310000_03_030");
MsgDisp("Honda","That means those two umbrellas
are taken home regularly.");
MsgDisp("主人公","Y-Yeah.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("F100310000_03_040");
MsgDisp("Honda","But I always see them, that's why I was
observing it. I wondered if the owners
would show up during lunch break.");
MsgDisp("主人公","So, did they?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("F100310000_03_050");
MsgDisp("Honda","Heheh, are you getting 
interested?");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,2,1);
VoicePlay("F100310000_03_060");
MsgDisp("Honda","But it's still a no-go.
I haven't observed enough 
to get to the truth.");
SEPlay("EV_SE_SCHOOL_002");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,5,1);
VoicePlay("F100310000_03_070");
MsgDisp("Honda","Ah, the bell. See you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(3);
MsgDisp("主人公","(As expected of ｛本多＊＊｝,
he's doing something interesting.
I'm definitely curious...)");
SEStop("EV_SE_SCHOOL_002",1);
MsgClose();
ScrFadeOut(0,0);
