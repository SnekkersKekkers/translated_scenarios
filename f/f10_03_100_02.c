BGOpen("sc501",0);
ScrFadeIn(0);
MsgDisp("主人公","(Lunch break is going to end soon.
I have to head back to the classroom...
Ah, there are two umbrellas
lying around today too...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
BGMPlay("BGM_C03_HONDA_A",0.01);
ChOpen(3,254,0,0,0,-1,-1,0,0);
VoiceEVSPlay(3);
VoicePlay("F100310002_03_000");
MsgDisp("Honda","｛主人公｝.");
MsgDisp("主人公","Ah,｛本多＊＊｝.
Those umbrellas are here
again today, huh?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("F100310002_03_010");
MsgDisp("Honda","Yeah, that's right.
Looks like they can't go 
home together today.");
MsgDisp("主人公","Eh?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("F100310002_03_020");
MsgDisp("Honda","My hypothesis is. On days when the owners
of the pink umbrella and blue umbrella
can go home together, the umbrella handles
will be facing the same way.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("F100310002_03_030");
MsgDisp("Honda","They're probably both busy with club
activities and part-time jobs.
They can't go home together.");
MsgDisp("主人公","Ehh, is that so?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
VoicePlay("F100310002_03_040");
MsgDisp("Honda","We don't know the truth.
But there's no need to prove
this hypothesis, right?");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("F100310002_03_050");
MsgDisp("Honda","Even I can read the 
room at least that much.");
MsgDisp("主人公","Hehe, great.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("F100310002_03_060");
MsgDisp("Honda","Hehe, right?
Then you should forget about this too.
You'll pretend not to know in the
critical moment, won't you?");
MsgDisp("主人公","Yes.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("F100310002_03_070");
MsgDisp("Honda","I still have a lot of things to observe.
Let's meet again somewhere!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(3);
MsgDisp("主人公","(｛本多＊＊｝ has an extensive list 
of observation targets. It's not just
plants and insects..
Maybe I'm being observed too?)");
MsgClose();
ScrFadeOut(0,0);
