BGOpen("ho210",2);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","Ah, ｛ひかる＊｝ is calling.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
VoicePlay("C022200000_22_000");
MsgDisp("Hikaru","...Hello, Mari.
Something bad is going on, you know?");
MsgDisp("主人公","｛ひかる＊｝.
...Disaster?");
VoicePlay("C022200000_22_010");
MsgDisp("Hikaru","Hey, do you remember being cold to any of
the boys around you, lately?");
VoicePlay("C022200000_22_020");
MsgDisp("Hikaru","Like ignoring them, being cold, having
tactless conversations, or showing off how
close you are with another boy?");
MsgDisp("主人公","Eh...");
VoicePlay("C022200000_22_030");
MsgDisp("Hikaru","Boys are more sensitive than you'd think.
Even a little misunderstanding can really
hurt their feelings.");
VoicePlay("C022200000_22_040");
MsgDisp("Hikaru","And those wounds? They can turn into a
ticking time bomb. And one of the boys
near Mari is like that right now. ...Did
you notice?");
MsgDisp("主人公","Eh?");
VoicePlay("C022200000_22_050");
MsgDisp("Hikaru","Hikaru thinks Mari knows, but if annoyance
\"boils up\" long enough suddenly one day...
Boom! You know?");
VoicePlay("C022200000_22_060");
MsgDisp("Hikaru","So it's better to handle it before it
comes to that.
Kay?");
MsgDisp("主人公","But, how should I...");
VoicePlay("C022200000_22_070");
MsgDisp("Hikaru","First, find out which boy is hurt. If you
really can't figure it out, ask Hikaru!
For Mari's sake, Hikaru will investigate!");
VoicePlay("C022200000_22_080");
MsgDisp("Hikaru","Once you know who it is, hurry and call
them! If you talk to them directly, Hikaru
thinks the misunderstanding will clear up.");
MsgDisp("主人公","Yeah, I got it.");
VoicePlay("C022200000_22_090");
MsgDisp("Hikaru","Mari, good luck! If it gives you problems,
call Hikaru right up. Salut!");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(Someone is hurting because of my actions.
I wonder who it could be...)");
MsgClose();
