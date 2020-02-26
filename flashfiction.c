/*Flash Fiction Anthology
	Author:			arobb
	Last updated:	2020-02-25
	Notes:			Quick piece of code to compile flash fiction; project will likely be expanded into something more attractive later.*/

#include <stdio.h>
int main()
{

int story = 0;

printf("Welcome to my flash fiction anthology. Choices are: \n 1: Figment \n 2: Twenty Words \n 3: The Fall of King Edvin");
printf("\nPlease type the number of the desired story, or type \"0\" to quit: ");
scanf("%d", &story);

switch(story){
	case 0: // Quit
			printf("Come back again soon!");
			break;
	case 1: //Figment
			printf("\n\"Figment\"\n\nVince stood glowering, arms folded across his chest. The target of his stony gaze sat fidgeting in front of him. \"I can\'t believe you. First you murdered my family, and now you\'ve left my friends hostage to a lethal beast. Calling you a psychopath would be a euphemism,\" he spat.\n\n The strange man he addressed swivelled absently in his chair, the light from the table lamp glaring off the dirty lenses of the glasses perched atop his nose. He was beginning to bald, perhaps prematurely, but there was still more than enough hair to qualify as good coverage. His grey eyes glinted for a moment, and he didn\'t make eye contact with Vince. \"Well, I don\'t write the sins, though I am forced to write the tragedies that are caused by them.\" He spun around in his chair once more before smacking a hand atop a pile of papers. \"See this? This is the draft of the next chapter. And YOU-\" he looked up abruptly, pointing a lanky finger at his character, \"-will be the hero!\"\n\nA half-crazed grin spread across his face, but Vince was unmoved. \"I don\'t want stardom; I want less tragedy,\" he stated plainly. \"You should respect my wishes, Mark. I could simply quit on you, and suddenly you wouldn\'t even have a book, would you?\" Hands in the air to emphasize his point, Vince huffed in exasperation.\n\nWith a short laugh, the author shook his head dismissively. \"You know as well as I do, your heroic and assertive traits are only a part of you because I created you,\" he reminded Vince. \"You\'re a figment of my imagination, and yet you\'re as real to me as anyone else. And it\'s quarrels like these that allow me to further your character development.\" Mark turned back to his desk, his fingers twitching for a pen to write it all down.\n\n\"And what would happen if we exchanged places?\" Vince posed the question, observing his writer closely. \"If I were to make up a story about you, and you lost your family to a horde of undead soldiers, and then your friends were captured and brought to the lair of a mountain giant who only accepts virgin blood as ransom payment, how would YOU like that?\"\n\nThere was a flash of sadness in Mark\'s expression as he briefly met Vince\'s eyes, but he turned back quickly to busy himself with his papers. \"There\'s nothing that would ever lead you to know how truly similar our stories might be,\" he said quietly, pausing the frantic movement of the pen in his hand. \"But that is for me to know, and for me alone.\"\n\nBefore another word could be exchanged, Vince vanished from the room as if he\'d never existed, and Mark set down his pen and stood up to make himself some coffee.");
			break;
	case 2:  //Twenty Words
			printf("\n\"Twenty Words\"\n\nA dead tree stands, branches bare and scraping against the stormy sky. Here lies the end of our entwined paths.");
			break;
	case 3:  //The Fall of King Edvin
			printf("\n\"The Fall of King Edvin\"\n\n\n\nI was nothing like my father.\n\nI wasn\'t valiant or brave, nor did I have any desire to protect others.\n\nI had an easy life, with all the comforts provided to me by my father\'s hard work and loyal service to the late King Ragnar. I began an apprentice to the blacksmith, learned the art of metalworking, even made swords for my father and his fellow knights. I saved up enough to set up my own workshop, and folks came flocking to ask for my services.\n\nWhen Prince Edvin stepped up to the throne, many changes were made. Our resources became scarce. Clean water was hard to come by, and food was rationed. Precious minerals were hoarded by the new king, and I was instructed to refuse service to the commoners, on penalty of treason. \"Such a skilled young lad who produces wares fit for a king... Your hand shall henceforth serve only His Majesty, King Edvin!\" These words were spoken without any regard for my profession or my customers, and my skin crawled with disgust as the men departed.\n\nThat eve we sat down for supper when the men knocked on our door once more. \"Sir Fredrik,\" they called, \"we bring orders from the King.\"\nContempt twitched at the corners of his mouth as Father stood to answer the door. His steely eyes were still youthful, but his hair was greying, and a bald patch had already settled in. His movements were strong and methodical, but he\'d lost much of his agility since his younger years; his days as a knight were long over.\n\"I\'m afraid I no longer hold such a title,\" he replied, his disdain apparent as the door swung open to reveal two of the King\'s messengers. \"Now if you\'ll excuse us, my son and I are having our supper.\"\nOne of the men cleared his throat. \"It is the wish of King Edvin that you return to service tomorrow at the break of day; there is trouble brewing in the south, and our King believes you are the most knowledgeable about the area.\"\nFather\'s eyes widened for a moment, but narrowed into distrustful slits soon after. \"I haven\'t travelled south in twenty years. Much may have changed.\"\n\"It is an /order/,\" the messenger snarled, \"and I\'ll hear no more of your hesitation. Be ready at the dawn, or face the penalty. Good night, sir.\"\n\nThe door clicked shut, and my father stood grimacing over the table. His knuckles were white as his fingers gripped the edge of his chair, and I could see his jaw working anxiously. At last, he glanced up, his eyes boring into me. With a sigh, he began, \"...I\'m not what I once was, Harald. I\'ve grown old. My body is tired, and my mind has aged beyond repair. But what\'s left of me now - my creaky bones, my failing mind - my hands will /never/ take up arms to serve such a selfish, coldhearted king. And that is why...\" He paused as he strode over to the fireplace, and to my sheer surprise, removed several of the stones to reveal a short dagger and a glass vial filled with an unknown substance. \"...That is why I believe it\'s time. It\'s time to rid this kingdom of its unjust tyrant.\"\n\nThe firelight accentuated the flame of determination in his eyes, and I understood at once why he had earned a reputation as the most loyal of King Ragnar\'s knights: he served the people of the kingdom, and not only their ruler. And in that moment, I felt drawn to him like a moth.\n\nI was nothing like him. I was neither valiant nor brave, and I\'d never learned how to protect others. But some ancient instinct, buried deep within me, surfaced that night when I saw the reality through my father\'s flaming eyes.\n\n\"Father... I will join you.\"\n\nHis visage receded into the shadows once more as he stood silhouetted in front of the fireplace, but I knew a small smile traced his lips.\n\n\"Harald, fetch me my sword.\"");
			break;
	default:  // nonexistent number
			break;
			
}

printf("\n\nThis anthology will be expanded later. Thanks for reading!");

return 0;
}