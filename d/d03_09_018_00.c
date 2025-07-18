BGOpen("ho210",2);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Tomorrow is finally the exam...)");
SEPlay("EV_SE_577");
MsgDisp("主人公","(Ah, it's from Kuya-san!)");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgDisp("主人公","Yes, hello?");
VoicePlay("D030901800_09_000");
MsgDisp("Kuya","Good evening.
I didn't wake you...did I?");
MsgDisp("主人公","Hehe, of course not!");
VoicePlay("D030901800_09_010");
MsgDisp("Kuya","Tomorrow is exam day.
Are you nervous?");
MsgDisp("主人公","What about you...");
VoicePlay("D030901800_09_020");
MsgDisp("Kuya","Hearing your voice calmed me down.
It's like a magic spell.");
MsgDisp("主人公","In that case, me too.");
VoicePlay("D030901800_09_030");
MsgDisp("Kuya","Really?
I'm glad I called, then.");
MsgDisp("主人公","Yeah.
Let's do our best tomorrow!");
VoicePlay("D030901800_09_040");
MsgDisp("Kuya","I know.
For our future together.");
MsgDisp("主人公","Eh...");
VoicePlay("D030901800_09_050");
MsgDisp("Kuya","...When everything is over, I have
something I want to tell you.");
MsgDisp("主人公","Okay. ...Huh? What you said on Christmas
about it all being over, it was about the
exam——");
VoicePlay("D030901800_09_060");
MsgDisp("Kuya","That's not it.
...When that time comes, you'll see.");
VoicePlay("D030901800_09_070");
MsgDisp("Kuya","Let's meet again tomorrow when everything
is finally over for our Happy End.
Good night.");
MsgDisp("主人公","Yeah...
Good Night.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(Our Happy End is coming...)");
MsgClose();
ScrFadeOut(0,0);
