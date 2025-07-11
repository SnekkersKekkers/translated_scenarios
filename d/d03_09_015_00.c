BGOpen("ho210",2);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","(A phone call.
Ah......A private number!)");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgDisp("主人公","Hello, Kuya-san?");
VoicePlay("D030901500_09_000");
MsgDisp("Kuya","Good evening.");
MsgDisp("主人公","Good evening!");
VoicePlay("D030901500_09_010");
MsgDisp("Kuya","How are things going?
Have you been studying hard?");
MsgDisp("主人公","Yes, somehow.
What about you, Kuya-san?");
VoicePlay("D030901500_09_020");
MsgDisp("Kuya","I think so, somehow.
I recently took a practice exam and got
pretty good results.");
MsgDisp("主人公","Wow, that's great!");
VoicePlay("D030901500_09_030");
MsgDisp("Kuya","Thanks.
But I can't relax just yet, I have to
keep working hard.");
MsgDisp("主人公","You have my support.
Just don't overdo it, okay?");
VoicePlay("D030901500_09_040");
MsgDisp("Kuya","You too, don't push yourself so hard,
either. There's more to school life than
just studying.");
MsgDisp("主人公","Ah......right. The school festival is 
happening soon so they've started 
prepping for all the plays and events.");
VoicePlay("D030901500_09_050");
MsgDisp("Kuya","I see.
Since it's your last school festival you
should enjoy it as much as you can.");
MsgDisp("主人公","Yes!");
VoicePlay("D030901500_09_060");
MsgDisp("Kuya","Okay, time to hang up.
If I talk to you for too long, It'll
interfere with your studies.");
MsgDisp("主人公","U-Uhm......");
VoicePlay("D030901500_09_070");
MsgDisp("Kuya","Good night, then.");
MsgDisp("主人公","Ah......
Okay, good night......");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(Hmm......I wanted to invite Kuya-san 
to the school festival but it would 
interfere with his studies......)");
MsgClose();
ScrFadeOut(0,0);
