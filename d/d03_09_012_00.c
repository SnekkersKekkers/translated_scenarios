BGOpen("ho210",2);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","(Ah, a phone call...
A private number?)");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgDisp("主人公","...Hello?");
VoicePlay("D030901200_09_000");
MsgDisp("Kuya","Hello.
It's me... can you hear me?");
MsgDisp("主人公","That voice, Kuya-san!
I was a little hesitant to answer because
of the private number.");
VoicePlay("D030901200_09_010");
MsgDisp("Kuya","Ah...
I'm calling from my home phone.
Maybe sis made it that way.");
MsgDisp("主人公","What about your cellphone?");
VoicePlay("D030901200_09_020");
MsgDisp("Kuya","Hm. Well, since I'm a freeloader I don't
really have that kind of luxury... Sorry
for it being so one-sided.");
MsgDisp("主人公","It's fine, it doesn't matter.");
VoicePlay("D030901200_09_030");
MsgDisp("Kuya","Yeah.
How are things lately?
Keeping busy?");
MsgDisp("主人公","Let's see...Between studying for exams and
doing school stuff, I guess I'm more busy
than I was in 2nd year?");
VoicePlay("D030901200_09_040");
MsgDisp("Kuya","Haha, I get that.
But unlike you, I wasn't studying much
back then.");
MsgDisp("主人公","Hehe.
What about Kuya-san, how's studying for
entrance exams going?");
VoicePlay("D030901200_09_050");
MsgDisp("Kuya","I'm desperate...
I can't stop thinking about you and I hate
that I can't concentrate on studying.");
MsgDisp("主人公","I-I see.
Maybe we should study together, then?");
VoicePlay("D030901200_09_060");
MsgDisp("Kuya","No way.
I don't need extra study-time.");
MsgDisp("主人公","?");
VoicePlay("D030901200_09_070");
MsgDisp("Kuya","I have to do this on my own.
Otherwise I won't be proud enough to stand
next to you.");
MsgDisp("主人公","I understand.
I'll also work hard so I won't regret it.");
VoicePlay("D030901200_09_080");
MsgDisp("Kuya","Yep. Even if we're apart, we're working
towards the same goal. Improving our
\"studies\" and our \"art\".");
MsgDisp("主人公","Yes!");
VoicePlay("D030901200_09_090");
MsgDisp("Kuya","It's getting late so, that's all for now.
I'll call you again soon.
Good night.");
MsgDisp("主人公","Okay, good night...");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(Kuya-san seems to be studying hard for
the entrance exams!
I have to work hard too!)");
MsgClose();
ScrFadeOut(0,0);
