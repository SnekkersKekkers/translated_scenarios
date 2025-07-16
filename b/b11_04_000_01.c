ChLayout(1);
ChClose(4,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Seems like ｛七ツ森＊｝
isn't here yet...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_557",0.2);
ChOpen(34,254,0,1,0,#1,#1,0,0);
VoicePlay("B110400001_34_000");
MsgDisp("Guy","Ahh, it's already this time...
I have to quickly go.");
MsgDisp("主人公","Eh?");
ChEye(34,0);
ChMouth(34,0);
VoicePlay("B110400001_34_010");
MsgDisp("Guy","Heeh, that gear looks good on you.");
MsgDisp("主人公","(This guy is pretty weird himself
though...)");
ChEye(34,0);
ChMouth(34,0);
VoicePlay("B110400001_34_020");
MsgDisp("Guy","The limited-time quest \"Big Wave of Love\";
you're going right?
You'll be late.");
MsgClose();
ChPosition(34,1);
ChClose(34,0,10);
SEPlay("EV_SE_647",0,0.8);
MsgDisp("","(*THUNK*)");
BGMPlay("BGM_PLACE_BEACH",0.01);
ChNanaType(#1);
ChOpen(4,31,0,1,0,#1,#1,0,0);
VoicePlay("B110400001_04_000");
MsgDisp("Nanatsumori","Dumbass.
What's with that lame catchphrase-like
line...");
MsgDisp("主人公","｛七ツ森＊｝!");
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("B110400001_04_010");
MsgDisp("Nanatsumori","Sorry.
I lost my locker key somewhere and was
looking for it.");
MsgDisp("主人公","Ehh∋
Did you find it?");
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,0,1);
VoicePlay("B110400001_04_020");
MsgDisp("Nanatsumori","Yeah, that's why I'm here.");
MsgDisp("主人公","Hey...
Be careful not to lose anything, okay?");
ChEye(4,4);
ChMouth(4,2);
ChMotion(4,2,1);
VoicePlay("B110400001_04_030");
MsgDisp("Nanatsumori","Understo-od.");
ChPosition(4,2);
MsgClose();
SEPlay("EV_SE_557",0.2);
ChOpen(34,254,0,1,2,#1,#1,0,1);
VoicePlay("B110400001_34_030");
MsgDisp("Guy","Well there's three people, but we can
still go to the \"Big Wave of Love\".");
MsgDispSksp(1,5);
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,0,1);
VoicePlay("B110400001_04_040");
MsgDisp("Nanatsumori","You're still here.
If you're serious about picking up
girls—— That's right... yeah.");
MsgDispSksp(0);
MsgDispSksp(1,5);
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,2,1);
VoicePlay("B110400001_04_050");
MsgDisp("Nanatsumori","Nah. I was going to give you advice to
increase your success rate, but I can't
think of anything.");
MsgDispSksp(0);
ChEye(34,1);
ChMouth(34,1);
VoicePlay("B110400001_34_040");
MsgDisp("Guy","Eh, I want this advice...");
MsgDispSksp(1,5);
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B110400001_04_060");
MsgDisp("Nanatsumori","Well, we're going to go and ride that \"Big
Wave\" or whatever... thing.
Farewell～");
MsgDispSksp(0);
ChEye(34,1);
ChMouth(34,1);
VoicePlay("B110400001_34_050");
MsgDisp("Guy","Solo play again huh...");
SEPlay("EV_SE_580");
MsgClose();
ChClose(34,0,30);
ChPosition(4,0);
MsgDisp("主人公","What was that 'whatever' thing again?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B110400001_04_070");
MsgDisp("Nanatsumori","Well, who know.
Let's go.");
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
