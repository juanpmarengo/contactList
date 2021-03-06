#include "contact.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Contact new_Contact() {
  Contact contact = malloc(sizeof(ContactNode));

  contact->firstName  = NULL;
  contact->lastName   = NULL;
  contact->age        = 0;
  contact->gender     = NULL;
  contact->phone      = NULL;
  contact->email      = NULL;
  contact->birthday   = NULL;

  return contact;
}

void free_Contact(Contact contact) {
  free(contact->firstName);
  free(contact->lastName);
  free(contact->gender);
  free(contact->phone);
  free(contact->email);
  free(contact->birthday);
  free(contact);
}

void print_Contact(Contact contact) {
  printf("First name: %s\nLast name: %s\nAge: %d\nGender: %s\nPhone: %s\nEmail: %s\nBirthday: %s\n", contact->firstName, contact->lastName, contact->age, contact->gender, contact->phone, contact->email, contact->birthday);
}

int compare_ContactPhoneByValue(Contact contact, char *value) {
  return strcmp(contact->phone, value);
}

void writeInFile_Contact(Contact contact, FILE *f) {
  fprintf(f, "%s\n%s\n%d\n%s\n%s\n%s\n%s\n", contact->firstName, contact->lastName, contact->age, contact->gender, contact->phone, contact->email, contact->birthday);
}

int compareByFirstName_Contact(Contact a, Contact b) {
  return strcmp(a->firstName, b->firstName);
}

int compareByLastName_Contact(Contact a, Contact b) {
  return strcmp(a->lastName, b->lastName);
}

int compareByAge_Contact(Contact a, Contact b) {
  return a->age < b->age ? -1 : (a->age > b-> age ? 1 : 0);
}

int compareByGender_Contact(Contact a, Contact b) {
  return strcmp(a->gender, b->gender);
}

int compareByPhone_Contact(Contact a, Contact b) {
  return strcmp(a->phone, b->phone);
}

int compareByEmail_Contact(Contact a, Contact b) {
  return strcmp(a->email, b->email);
}

int compareByBirthday_Contact(Contact a, Contact b) {
  return strcmp(a->birthday, b->birthday);
}